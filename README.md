# _printf Project

## Table of Contents
1. [Introduction](#introduction)
2. [Requirements](#requirements)
3. [Authorized Functions and Macros](#authorized-functions-and-macros)
4. [Compilation](#compilation)
5. [Usage](#usage)
6. [Tasks](#tasks)
7. [Authors](#authors)

## Introduction
This project is a reimplementation of the `printf` function in C. The goal is to create a custom `printf` function, `_printf`, that produces output according to a format. This project is completed in teams of two.

## Requirements
- **Editors**: vi, vim, emacs
- **OS**: Ubuntu 20.04 LTS
- **Compiler**: gcc with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding style**: Betty style
- No global variables
- No more than 5 functions per file
- A `README.md` file at the root of the project folder
- All header files should be include guarded
- Prototypes of all functions should be included in the header file `main.h`

## Authorized Functions and Macros
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

## Compilation
My code will be compiled this way:
```sh
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
