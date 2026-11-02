*This project has been created as part of the 42 curriculum by zayacoub.*

# Libft

## Description

**Libft** is a C programming project focused on understanding how standard C library functions work by reimplementing them from scratch.

The goal is to build a personal C library, `libft.a`, containing reusable functions for character classification, string manipulation, memory management, conversions, and linked-list operations.

This project strengthens fundamental C programming skills, particularly pointers, memory allocation, data manipulation, and dynamic memory management. The resulting library can be reused in future 42 projects.

## Library Contents

The library is divided into three main parts.

### 1. Libc Functions

Reimplementations of standard C library functions, using the `ft_` prefix.

**Character classification**
- `ft_isalpha` — checks whether a character is alphabetic.
- `ft_isdigit` — checks whether a character is a digit.
- `ft_isalnum` — checks whether a character is alphanumeric.
- `ft_isascii` — checks whether a character belongs to the ASCII character set.
- `ft_isprint` — checks whether a character is printable.

**String and memory manipulation**
- `ft_strlen` — calculates the length of a string.
- `ft_memset` — fills a memory area with a specified byte.
- `ft_bzero` — sets a memory area to zero.
- `ft_memcpy` — copies a block of memory.
- `ft_memmove` — copies memory while handling overlapping regions.
- `ft_strlcpy` — copies a string with size limitation.
- `ft_strlcat` — concatenates strings with size limitation.
- `ft_strchr` — locates the first occurrence of a character.
- `ft_strrchr` — locates the last occurrence of a character.
- `ft_strncmp` — compares two strings up to a specified number of characters.
- `ft_memchr` — searches for a byte in a memory area.
- `ft_memcmp` — compares two memory areas byte by byte.
- `ft_strnstr` — locates a substring within a limited length.
- `ft_tolower` — converts a character to lowercase.
- `ft_toupper` — converts a character to uppercase.
- `ft_atoi` — converts a string into an integer.
- `ft_calloc` — allocates and initializes memory to zero.
- `ft_strdup` — duplicates a string using dynamic allocation.

### 2. Additional Functions

Functions that extend the standard library's functionality and provide useful string operations.

- `ft_substr` — creates a substring from a given string.
- `ft_strjoin` — concatenates two strings into a newly allocated string.
- `ft_strtrim` — removes specified characters from the beginning and end of a string.
- `ft_split` — splits a string into an array of strings using a delimiter.
- `ft_itoa` — converts an integer into a string.
- `ft_strmapi` — applies a function to each character and creates a new string.
- `ft_striteri` — applies a function to each character, allowing the original string to be modified.
- `ft_putchar_fd` — writes a character to a specified file descriptor.
- `ft_putstr_fd` — writes a string to a specified file descriptor.
- `ft_putendl_fd` — writes a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd` — writes an integer to a specified file descriptor.

### 3. Linked-List Functions

The linked-list part introduces dynamic data structures using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:
- `content` — a pointer to the data stored in the node.
- `next` — a pointer to the next node, or `NULL` if it is the last node.

The library provides the following operations:

- `ft_lstnew` — creates a new node.
- `ft_lstadd_front` — adds a node at the beginning of a list.
- `ft_lstsize` — counts the number of nodes.
- `ft_lstlast` — returns the last node.
- `ft_lstadd_back` — adds a node at the end of a list.
- `ft_lstdelone` — deletes one node and its content.
- `ft_lstclear` — deletes a node and all following nodes.
- `ft_lstiter` — applies a function to each node's content.
- `ft_lstmap` — creates a new list by applying a function to each node's content.

## Instructions

### Requirements

- A C compiler (`cc`).
- GNU Make.
- A Unix-like environment.

### Compilation

Clone the repository:

```bash
git clone <repository-url>
cd libft
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` or `make all` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and the library. |
| `make re` | Rebuilds the library from scratch. |
| `make bonus` | Compiles the bonus functions, if included in the project. |

### Using the Library

Include the header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run it:

```bash
./program
```

## Technical Considerations

- Written entirely in C.
- Follows the 42 Norm.
- Compiled with `-Wall -Wextra -Werror`.
- Uses `ar` to create the static library.
- No global variables.
- Helper functions are declared `static` when appropriate.
- Dynamically allocated memory must be properly managed and freed.

## Resources

The following resources are useful for understanding the concepts and standard functions implemented in this project:

- [42 Libft Subject](https://cdn.intra.42.fr/pdf/pdf/XXXXX/en.subject.pdf) — project requirements and function specifications.
- [Linux man pages](https://man7.org/linux/man-pages/) — documentation for standard C and Unix functions.
- [cppreference](https://en.cppreference.com/w/c) — C language reference and library documentation.
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/) — reference for standard library behavior.
- [C Programming Language — cppreference](https://en.cppreference.com/w/c) — language concepts, pointers, memory, and data structures.

### AI Usage

AI tools were used as supplementary learning resources throughout the project. They helped clarify C programming concepts, including pointers, memory allocation, string manipulation, linked lists, and the behavior of standard library functions.

They were also used to discuss edge cases, understand function specifications, and support debugging and testing preparation. The purpose was to improve understanding of the implementation and develop the ability to explain and defend the code independently.