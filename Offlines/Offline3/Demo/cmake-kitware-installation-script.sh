# Download CMake 3.25.3 pre-compiled binary
wget https://github.com/Kitware/CMake/releases/download/v3.25.3/cmake-3.25.3-linux-x86_64.sh

# Make the installer executable
chmod +x cmake-3.25.3-linux-x86_64.sh

# Install system-wide to /usr/local
sudo ./cmake-3.25.3-linux-x86_64.sh --skip-license --prefix=/usr/local

# Verify installation
cmake --version
