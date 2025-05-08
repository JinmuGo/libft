# Libft

**Libft** is a personal re-implementation of a subset of the C standard library together with a handful of extra utilities.  
It is the first **42 Cursus** project and acts as the foundation for every subsequent C assignment.

## Table of Contents

1. [Purpose](#purpose)  
2. [Features](#features)  
   1. [Part 1 – Libc Re-creation](#part-1)  
   2. [Part 2 – Additional Utilities](#part-2)  
   3. [Bonus – Linked-List API](#bonus)  
3. [Learning Outcomes](#learning-outcomes)  
4. [Building the Library](#building-the-library)  
5. [Using libft.a](#using-libfta)  

## Purpose

* Re-code fundamental **libc** routines to gain low-level insight into memory management, pointer arithmetic, and defensive programming.  
* Provide a portable static library (**libft.a**) that you will re-use in every other C project at 42.  

## Features

### Part 1

A minimal, standards-compliant subset of <string.h>, <ctype.h>, <stdlib.h>:

| Category | Functions |
|----------|-----------|
| Memory   | [`ft_memset`](./ft_memset.c), [`ft_bzero`](./ft_bzero.c), [`ft_memcpy`](./ft_memcpy.c), [`ft_memmove`](./ft_memmove.c), [`ft_memchr`](./ft_memchr.c), [`ft_memcmp`](./ft_memcmp.c) |
| Strings  | [`ft_strlen`](./ft_strlen.c), [`ft_strlcpy`](./ft_strlcpy.c), [`ft_strlcat`](./ft_strlcat.c), [`ft_strchr`](./ft_strchr.c), [`ft_strrchr`](./ft_strrchr.c), [`ft_strncmp`](./ft_strncmp.c), [`ft_strnstr`](./ft_strnstr.c) |
| Charset  | [`ft_isalpha`](./ft_isalpha.c), [`ft_isdigit`](./ft_isdigit.c), [`ft_isalnum`](./ft_isalnum.c), [`ft_isascii`](./ft_isascii.c), [`ft_isprint`](./ft_isprint.c), [`ft_toupper`](./ft_toupper.c), [`ft_tolower`](./ft_tolower.c) |
| Others   | [`ft_atoi`](./ft_atoi.c), [`ft_calloc`](./ft_calloc.c), [`ft_strdup`](./ft_strdup.c) |

### Part 2

Higher-level helpers that make everyday C programming less painful:

[`ft_substr`](./ft_substr.c), [`ft_strjoin`](./ft_strjoin.c), [`ft_strtrim`](./ft_strtrim.c), [`ft_split`](./ft_split.c), [`ft_itoa`](./ft_itoa.c), [`ft_strmapi`](./ft_strmapi.c), [`ft_striteri`](./ft_striteri.c), [`ft_putchar_fd`](./ft_putchar_fd.c), [`ft_putstr_fd`](./ft_putstr_fd.c), [`ft_putendl_fd`](./ft_putendl_fd.c), [`ft_putnbr_fd`](./ft_putnbr_fd.c)

### Bonus

A minimal **singly linked-list** abstraction (type `t_list`) with creation, traversal, mutation, and mapping helpers:

[`ft_lstnew`](./ft_lstnew.c), [`ft_lstadd_front`](./ft_lstadd_front.c), [`ft_lstsize`](./ft_lstsize.c), [`ft_lstlast`](./ft_lstlast.c), [`ft_lstadd_back`](./ft_lstadd_back.c), [`ft_lstdelone`](./ft_lstdelone.c), [`ft_lstclear`](./ft_lstclear.c), [`ft_lstiter`](./ft_lstiter.c), [`ft_lstmap`](./ft_lstmap.c)

---

## Learning Outcomes

* **Manual memory management** (`malloc` / `free`) & error handling  
* **Buffer-safe** string manipulation (no UB, no over-reads)  
* **Const-correctness** and API design for reusability  
* Building a **static archive** with `ar` and orchestrating builds via a **Makefile**  
* Designing and unit-testing a simple **abstract data type** (linked list)

## Building the Library

```bash
git clone https://github.com/<user>/libft.git
cd libft

# mandatory + additional utilities
make

# include linked-list API
make bonus

# housekeeping
make clean   # remove .o
make fclean  # remove .o and libft.a
make re      # full rebuild
```

A successful build produces **`libft.a`** in the project root.

## Using libft.a

```c
#include "libft.h"

int main(void)
{
    char *msg = ft_strjoin("Hello, ", "world!");
    ft_putendl_fd(msg, 1);   // prints to stdout
    free(msg);
    return 0;
}
```

```bash
cc main.c -I./inc -L. -lft
```
