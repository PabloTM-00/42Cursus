# get_next_line - 42 C Project

## Introduction

The **get_next_line** project in the 42 curriculum focuses on implementing a function that reads a line from a file descriptor, whether it's a file, a standard input, or even a socket. This function reads a single line at a time and dynamically allocates memory for the returned line.

The objective is to create a reusable function that reads lines efficiently and correctly handles different file descriptors, line delimiters, and dynamic memory management.

---

## Project Overview

### Goal

Your task is to implement the `get_next_line` function, which reads one line from a file descriptor and returns it. A line is defined as a sequence of characters ending with a newline (`'\n'`) or the end of the file (EOF). 

The function must:
- Read from a file descriptor until it encounters a newline character or the end of the file.
- Dynamically allocate memory for the line.
- Return the line and make sure the file descriptor can be used to get the next line when called again.
- Handle multiple file descriptors simultaneously.

### Behavior

- **Return Value**: The function returns a string containing one line from the file. If no line is available (EOF reached or an error occurs), it returns `NULL`.
- **Memory Management**: Each line must be dynamically allocated. If memory is allocated during one call of `get_next_line`, it must be freed after use to avoid memory leaks.
- **Multiple Calls**: The function must maintain state across calls to return the next line each time. It should not return the same line repeatedly and should correctly handle multiple calls to `get_next_line` for different file descriptors.

---

## Project Requirements

1. **File Descriptor Handling**: The function must handle multiple file descriptors independently. This means each file descriptor should have its own internal buffer that maintains the current position in the file.
2. **Memory Allocation**: All lines returned by `get_next_line` must be dynamically allocated. You need to ensure proper memory management to avoid leaks.
3. **Edge Cases**:
   - Handle empty lines (lines containing only `\n`).
   - Handle EOF correctly, returning `NULL` when no more data is available.
   - Ensure no memory is leaked between multiple calls to `get_next_line`.
   - Handle files with multiple lines, calling `get_next_line` multiple times.
4. **Efficiency**: Your function should be efficient, both in terms of memory and time complexity. Avoid redundant operations or unnecessary memory reallocations.

### Allowed Functions:
- **read()**: You are allowed to use the `read()` system call to read from file descriptors.
- **malloc()**, **free()**, and **gnl functions (helpers)** are allowed for memory allocation and cleanup.

### Disallowed Functions:
- **getline()**, **fgets()**, or any other higher-level functions from the standard library should not be used.
  
---

## Function Prototype

```c
char *get_next_line(int fd);
