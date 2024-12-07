# About -

- For the development of `awara language`, a lawless custom programming language made for fun and learning purposes.
- The lexers (keywords/tokkens) are in Hindi language primarily.
- Made using `LLVM` and Written in `C++`

# How to -

- ## Build -
    Install the following dependencies:
  -   `LLVM`
  -   `clang`
  -   `base-devel`
    <br>
    #### Installation for Windows -
    - Install the `MSYS2` binary from the [official website](https://www.msys2.org/). And run these command to install `MinGW64` and other dependencies-
        ```bash
        pacman -S mingw-w64-ucrt-x86_64-gcc
        pacman -S mingw-w64-x86_64-llvm mingw-w64-x86_64-clang
        pacman -S base-devel mingw-w64-x86_64-toolchain
        pacman -S mingw-w64-x86_64-toolchain
        pacman -S mingw-w64-x86_64-gdb
        ```

    >***Note***: _You can also install the binaries of LLVM and CLANG directly from their official website or GitHub repo, although that don't contain all of the required binaries. Atleast it didn't for me._

    #### Installation for Linux:
     - <strong>For Arch based systems - </strong>
        ```bash
        sudo pacman -Syu
        sudo pacman -S llvm clang
        sudo pacman -S base-devel
        sudo pacman -S gcc-libs
        ```
    - <strong> For Debian based systems - </strong>
        ```bash
        sudo apt update
        sudo apt install clang llvm
        sudo apt install build-essential
        sudo apt install libstdc++-10-dev
        ```
        
    - <strong> For Fedora based systems - </strong>
        ```bash
        sudo dnf system-upgrade
        sudo dnf install clang llvm
        sudo dnf groupinstall "Development Tools"
        sudo dnf install libstdc++-devel
        ```
    - <strong> For FreeBSD based systems - </strong>
        ```bash
        freebsd-update fetch install && pkg upgrade
        sudo pkg install llvm13 clang
        sudo pkg install gcc
        sudo pkg install libstdc++
        ```

    Test the installations -
    ```bash
    clang --version
    llvm-config --version
    ```

# Compile -

Run the `build.sh` file to build the binary executable like this - 
```bash
chmod +x buil.sh
```
and then running the file -
```bash
./build.sh
```

- **Note**: If building on `Windows` , then run it in `MinGW64` terminal.