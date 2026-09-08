# libft

My own C library reimplementing a set of standard libc functions, along with additional utility functions. This is the first project of the 42 core curriculum.

## 📋 Description

**libft** is the first project of the 42 curriculum. The goal is to recreate several functions from the standard C library, then add extra utility functions useful for later projects (string handling, linked lists, etc.). This project serves as a foundation and will be reused across many future projects.

## 🛠️ Build

```bash
make          # builds the library -> libft.a
make clean    # removes object files
make fclean   # removes object files + the library
make re       # fclean + make
```

## 🚀 Usage

Include the header in your source file:

```c
#include "libft.h"
```

Compile while linking the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o main
```

## 📚 Implemented functions

### Mandatory part

**Character checking / conversion**
| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is an ASCII character |
| `ft_isprint` | Checks if a character is printable |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |

**Strings**
| Function | Description |
|---|---|
| `ft_strlen` | Computes the length of a string |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates a string with size limit |
| `ft_strchr` | Locates a character in a string (forward) |
| `ft_strrchr` | Locates a character in a string (backward) |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strdup` | Duplicates a string |
| `ft_substr` | Extracts a substring |
| `ft_strjoin` | Concatenates two strings into a newly allocated one |
| `ft_strtrim` | Trims leading/trailing characters from a string |
| `ft_split` | Splits a string based on a separator |
| `ft_strmapi` | Applies a function to each character (new string) |
| `ft_striteri` | Applies a function to each character (in place) |

**Conversion / memory**
| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer |
| `ft_itoa` | Converts an integer to a string |
| `ft_memset` | Fills a memory area with a given byte |
| `ft_bzero` | Zeroes out a memory area |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies a memory area (overlapping zones) |
| `ft_memchr` | Locates a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates and zero-initializes memory |

**Output**
| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Bonus part — Linked lists

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the front of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Counts the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees all nodes |
| `ft_lstiter` | Applies a function to each node |
| `ft_lstmap` | Applies a function and creates a new list |

To build with bonus functions:
```bash
make bonus
```

## 📁 Project structure

```
libft/
├── libft.h          # Main header
├── Makefile
├── *.c              # Source files (mandatory + bonus)
└── README.md
```

## ✅ Norm

The project follows the **42 Norm** (Norminette).
