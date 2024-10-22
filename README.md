
# 42 Piscine Repository

**[Українська](ua.README.md)** | **[Español](es.README.md)**

This repository contains my exercises and projects from the 42 Piscine.

## Table of Contents
- [About](#about)
- [Norminette](#norminette)
- [Compiling C Files](#compiling-c-files)
- [Generating Standard Headers](#generating-standard-headers)
- [Author](#author)

## About
The 42 Piscine is an intensive, month-long coding bootcamp that covers the basics of programming in C, shell scripting, and Unix systems. It helps prepare students for the full 42 cursus.

## Norminette
The **Norminette** is the tool used at 42 to check the conformity of your C code to the 42 coding style. Before submitting any project, your code should pass the Norminette without any errors.

### Usage
You can run Norminette on a file or an entire directory:

```bash
norminette <file.c>
norminette <directory>
```

The tool checks:
- Line length (maximum of 80 characters)
- Function length (maximum of 25 lines)
- File length (maximum of 5 functions)
- Naming conventions for variables, functions, and files
- Proper indentation and code structure

## Compiling C Files
At 42 Piscine, all C files must be compiled with specific flags to ensure error-free code and proper handling of warnings. The following command should be used:

```bash
cc -Wall -Wextra -Werror <file.c> -o <output>
```

## Generating Standard Headers
To generate the standard header in **vim**, use the `Stdheader` command, which creates a header with the required format for 42 projects.

### Steps to Generate Header:
1. Open the file in `vim`.
2. Press `Esc` to enter command mode.
3. Type `:Stdheader` and press Enter.

## Author 🦝
- Name: Yevhenii Kiprenko
- Email: zhenyakiprenko@gmail.com
- [LinkedIn](https://www.linkedin.com/in/kiprenko/)
