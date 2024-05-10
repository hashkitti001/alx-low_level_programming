# Ox1C - Makefiles

## Description:
This repository contains submissions for tasks related to makefiles. Makefiles are essential files used to automate the build process of C/C++ projects. Through this repository, I gained knowledge about:

- The GNU make utility
- The basic structure of makefiles
- Substitution referencing

## Task 1:

### 0. Creating Your First Makefile
- Command: `make -f 0-Makefile`
  
**Requirements:**
- Name of the executable: `school`
- Rules: `all`
  - The `all` rule builds the executable.
- Variables: None

### 1. Creating a Makefile with Compiler and Source Files
- Command: `make -f 1-Makefile`

**Requirements:**
- Name of the executable: `school`
- Rules: `all`
  - The `all` rule builds the executable.
- Variables: `CC`, `SRC`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files

### 2. Creating a Useful Makefile
- Requirements: Create a Makefile with the following specifications:

**Requirements:**
- Name of the executable: `school`
- Rules: `all`
  - The `all` rule builds the executable.
- Variables: `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
- Additional Specifications:
  - The `all` rule should recompile only the updated source files.
  - Not allowed to have a list of all the `.o` files.

### 3. Complete Makefile with Advanced Features
- Command: `make -f 3-Makefile` (mandatory)

**Requirements:**
- Name of the executable: `school`
- Rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds the executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
- Additional Specifications:
  - The `all` rule should recompile only the updated source files.
  - The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  - Not allowed to have a list of all the `.o` files.

### 4. Complete Makefile with Advanced Features
- Command: `make -f 4-Makefile` (mandatory)

**Requirements:**
- Name of the executable: `school`
- Rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds the executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- Variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- Additional Specifications:
  - The `all` rule should recompile only the updated source files.
  - The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  - Not allowed to have a list of all the `.o` files.
nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn