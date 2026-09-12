#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

class Optimizer_2205014
{
public:
    void optimize(const string &inputFile, const string &outputFile)
    {
        ifstream ifs(inputFile);
        vector<string> lines;
        string line;
        while (getline(ifs, line))
        {
            lines.push_back(line);
        }
        ifs.close();

        bool changed = true;

        // Pass 1: Redundant Instructions
        while (changed)
        {
            changed = false;
            vector<string> nextLines;

            for (size_t i = 0; i < lines.size(); i++)
            {
                string curr = lines[i];
                string currCleaned = stripComment(curr);

                if (currCleaned.empty())
                {
                    continue;
                }

                if (i < lines.size() - 1)
                {
                    string next = lines[i + 1];
                    string nextCleaned = stripComment(next);

                    // 1. Redundant PUSH-POP
                    if (currCleaned.substr(0, 4) == "PUSH" && nextCleaned.substr(0, 3) == "POP")
                    {
                        string reg1 = trim(currCleaned.substr(4));
                        string reg2 = trim(nextCleaned.substr(3));
                        if (reg1 == reg2)
                        {
                            i++;
                            changed = true;
                            continue;
                        }
                    }

                    // 2. Redundant MOV
                    if (currCleaned.substr(0, 3) == "MOV" && nextCleaned.substr(0, 3) == "MOV")
                    {
                        size_t comma1 = currCleaned.find(',');
                        size_t comma2 = nextCleaned.find(',');

                        if (comma1 != string::npos && comma2 != string::npos)
                        {
                            string dst1 = trim(currCleaned.substr(3, comma1 - 3));
                            string src1 = trim(currCleaned.substr(comma1 + 1));

                            string dst2 = trim(nextCleaned.substr(3, comma2 - 3));
                            string src2 = trim(nextCleaned.substr(comma2 + 1));

                            if (dst1 == src2 && src1 == dst2)
                            {
                                nextLines.push_back(curr);
                                i++;
                                changed = true;
                                continue;
                            }
                        }
                    }
                }

                // 3. Redundant Arithmetic
                if (currCleaned.substr(0, 3) == "ADD" || currCleaned.substr(0, 3) == "SUB")
                {
                    size_t comma = currCleaned.find(',');
                    if (comma != string::npos && trim(currCleaned.substr(comma + 1)) == "0")
                    {
                        changed = true;
                        continue;
                    }
                }
                if (currCleaned.substr(0, 3) == "MUL" || currCleaned.substr(0, 3) == "DIV")
                {
                    size_t comma = currCleaned.find(',');
                    if (comma != string::npos && trim(currCleaned.substr(comma + 1)) == "1")
                    {
                        changed = true;
                        continue;
                    }
                }

                nextLines.push_back(curr);
            }
            lines = nextLines;
        }

        // Pass 2: Consecutive Labels mapping
        map<string, string> labelMap;
        vector<string> finalLines;

        for (size_t i = 0; i < lines.size(); i++)
        {
            string trimmed = stripComment(lines[i]);
            if (!trimmed.empty() && trimmed.back() == ':')
            {
                string currentLabel = trimmed.substr(0, trimmed.length() - 1);

                size_t j = i + 1;
                while (j < lines.size())
                {
                    string nextTrimmed = stripComment(lines[j]);
                    if (!nextTrimmed.empty() && nextTrimmed.back() == ':')
                    {
                        string nextLabel = nextTrimmed.substr(0, nextTrimmed.length() - 1);
                        labelMap[nextLabel] = currentLabel;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                finalLines.push_back(lines[i]);
                i = j - 1;
            }
            else
            {
                finalLines.push_back(lines[i]);
            }
        }

        // Pass 3: Redirect Jumps
        // Pass 3: Redirect Jumps
        ofstream out(outputFile);
        for (string line : finalLines)
        {
            string cleaned = stripComment(line);
            if (cleaned.substr(0, 3) == "JMP" || cleaned.substr(0, 2) == "JE" || cleaned.substr(0, 3) == "JNE" ||
                cleaned.substr(0, 2) == "JG" || cleaned.substr(0, 2) == "JL" || cleaned.substr(0, 3) == "JGE" ||
                cleaned.substr(0, 3) == "JLE")
            {
                size_t space = cleaned.find_last_of(" \t");
                if (space != string::npos)
                {
                    string target = trim(cleaned.substr(space + 1));
                    while (labelMap.find(target) != labelMap.end())
                    {
                        target = labelMap[target];
                    }

                    size_t commentPos = line.find(';');
                    string comment = commentPos != string::npos ? line.substr(commentPos) : "";

                    size_t firstNonSpace = line.find_first_not_of(" \t");
                    string indent = (firstNonSpace != string::npos) ? line.substr(0, firstNonSpace) : "\t";

                    line = indent + cleaned.substr(0, space) + " " + target + (comment.empty() ? "" : "\t\t" + comment);
                }
            }
            out << line << "\n";
        }
        out.close();
    }

private:
    string trim(const string &str)
    {
        size_t first = str.find_first_not_of(" \t\r\n");
        if (first == string::npos)
            return "";
        size_t last = str.find_last_not_of(" \t\r\n");
        return str.substr(first, last - first + 1);
    }

    string stripComment(const string &str)
    {
        size_t pos = str.find(';');
        return (pos != string::npos) ? trim(str.substr(0, pos)) : trim(str);
    }
};