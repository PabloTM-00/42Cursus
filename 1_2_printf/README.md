# ft_printf - 42 C Project

## Introduction

**ft_printf** is a project in the 42 curriculum where you are tasked with implementing a simplified version of the C standard library function `printf`. The goal of the project is to develop a function that formats and prints data to the standard output, similar to `printf`, by supporting a variety of format specifiers.

---

## Functions Implemented

Your custom `ft_printf` function must handle the following format specifiers:

| Format Specifier | Description                                                        |
|------------------|--------------------------------------------------------------------|
| **%c**           | Print a single character.                                          |
| **%s**           | Print a string of characters.                                      |
| **%p**           | Print a pointer address.                                           |
| **%d**           | Print a signed decimal integer.                                    |
| **%i**           | Print a signed integer (same as `%d`).                             |
| **%u**           | Print an unsigned decimal integer.                                 |
| **%x**           | Print a number in hexadecimal (lowercase).                         |
| **%X**           | Print a number in hexadecimal (uppercase).                         |
| **%%**           | Print a literal `%` character.                                     |

In addition to the format specifiers, the `ft_printf` function should handle:
- Handling of flags like `-` (left-alignment), `+` (forces the output to include a sign), `#` (adds a prefix for hex numbers), and `0` (pads the output with leading zeros).
- Width and precision control.
- Proper handling of different data types, including integers, strings, and pointers.

---

## Project Requirements

- **Implementation**: You must implement the `ft_printf` function in C. It should work similarly to the standard `printf` but with a subset of supported features.
- **No External Libraries**: The library should be implemented using only C code and should not rely on any external libraries or pre-existing implementations.
- **Memory Management**: Ensure that memory is allocated and freed properly, especially when dealing with dynamically allocated memory (e.g., in the case of strings).
- **Modularity**: The `ft_printf` function should be written in a modular way. You should organize the code into smaller helper functions to improve maintainability and readability.
- **Efficiency**: Your implementation should be efficient in terms of both time and memory usage. Avoid unnecessary computations and memory allocations.

---
