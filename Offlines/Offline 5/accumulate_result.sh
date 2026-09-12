#!/bin/bash

# Target output file
OUTPUT_FILE="io.txt"

# Clear or initialize io.txt
> "$OUTPUT_FILE"

counter=1

# Loop through all .c files in the input folder
for file in input/*.c; do
    # Ensure matching files exist
    [ -e "$file" ] || continue

    echo "Processing $file as testcase $counter..."

    # 1. Append input label and source code
    echo "input-$counter" >> "$OUTPUT_FILE"
    cat "$file" >> "$OUTPUT_FILE"
    echo "" >> "$OUTPUT_FILE"

    # 2. Run compiler binary to produce code.asm
    ./a.out "$file"

    # 3. Append output label and generated assembly
    echo "output-$counter" >> "$OUTPUT_FILE"
    if [ -f "code.asm" ]; then
        cat "code.asm" >> "$OUTPUT_FILE"
    fi
    echo "" >> "$OUTPUT_FILE"

    ((counter++))
done

echo "Done! All IO accumulated into $OUTPUT_FILE."