This project has been created as part of the 42 curriculum by "mabdalma"

# Libft - Rank 0:

A custom C library containing recoded standard C library functions alongside specialized string, memory, and linked list utilities. This project serves as the foundational library for future 42 School projects.

## Compilation & Usage

The project includes a robust Makefile supporting all standard 42 development workflows.

### Commands

* **`make`** — Compiles the mandatory library functions and creates `libft.a`.
* **`make clean`** — Removes all temporary object files (`.o`).
* **`make fclean`** — Removes all object files and deletes the compiled static library (`libft.a`).
* **`make re`** — Performs a clean rebuild of the entire library from scratch.

### Integrating into Your Code

To use this library in your C projects, include the header file in your code and link the library during compilation:

```c
#include "libft.h"
```

Compile your program along with the library:
```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

---

## Library Contents

### Part 1: Libc Functions
Recoded implementations of standard Unix/C library functions:

* **Character Checks:** `ft_isalpha` | `ft_isdigit` | `ft_isalnum` | `ft_isascii` | `ft_isprint`
* **Character Conversions:** `ft_toupper` | `ft_tolower`
* **String Utilities:** `ft_strlen` | `ft_strchr` | `ft_strrchr` | `ft_strncmp` | `ft_strnstr` | `ft_strlcpy` | `ft_strlcat`
* **Memory Blocks:** `ft_memset` | `ft_bzero` | `ft_memcpy` | `ft_memmove` | `ft_memchr` | `ft_memcmp`
* **Allocation & Parsing:** `ft_atoi` | `ft_calloc` | `ft_strdup`

### Part 2: Additional Functions
Non-standard utility functions for advanced string manipulation and file descriptor outputs:

* **String Engineering:** `ft_substr` | `ft_strjoin` | `ft_strtrim` | `ft_split` | `ft_itoa` | `ft_strmapi` | `ft_striteri`
* **File Descriptor Outputs:** `ft_putchar_fd` | `ft_putstr_fd` | `ft_putendl_fd` | `ft_putnbr_fd`

### Part 3: Linked Lists
A complete suite of tools to initialize, manipulate, map, and clear dynamic linked lists:

* **`ft_lstnew`** — Creates a new list node.
* **`ft_lstadd_front`** — Inserts a node at the absolute beginning of a list.
* **`ft_lstsize`** — Counts the total number of elements in a list.
* **`ft_lstlast`** — Retrieves the final node of a list.
* **`ft_lstadd_back`** — Appends a new node cleanly to the end of a list.
* **`ft_lstdelone`** — Frees the memory of a single node's contents.
* **`ft_lstclear`** — Deletes and clears an entire list sequence safely.
* **`ft_lstiter`** — Iterates and applies a function to all node contents.
* **`ft_lstmap`** — Maps a function over a list to produce a completely new list structure safely.
