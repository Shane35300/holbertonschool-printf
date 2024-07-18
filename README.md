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

## Usage
Here is an example of how to use the `_printf` function:
```c
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}


## Tasks

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
- **Prototype**: `int _printf(const char *format, ...);`
- **Description**: Handle conversion specifiers: `c`, `s`, `%`

### 1. Education is when you read the fine print. Experience is what you get if you don't
- **Description**: Handle conversion specifiers: `d`, `i`

### 2. Just because it's in print doesn't mean it's the gospel
- **Description**: Create a man page for your function.

## Authors
- **Shane Vaudrey**
