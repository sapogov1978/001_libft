#001_libft
##Recode a functions of the C standard library.

_This project is your very first project as a student at 42. <br>You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus._

<p>
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/sapogov1978/001_libft)
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/sapogov1978/001_libft?color=blue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/sapogov1978/001_libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/sapogov1978/001_libft?color=blue" />
</p>

This project consists of coding basic C functions (see below), which are then compiled into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isascii`](ft_isascii.c)	- test for ASCII character.
* [`ft_isalnum`](ft_isalnum.c)	- alphanumeric character test.
* [`ft_isalpha`](ft_isalpha.c)	- alphabetic character test.
* [`ft_isdigit`](ft_isdigit.c)	- decimal-digit character test.
* [`ft_isprint`](ft_isprint.c)	- printing character test (space character inclusive).
* [`ft_isspace`](ft_isspace.c) 	- white-space character test.
* [`ft_tolower`](ft_tolower.c)	- upper case to lower case letter conversion.
* [`ft_toupper`](ft_toupper.c)	- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](ft_atoi.c)	- convert ASCII string to integer.
* [`ft_calloc`](ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](ft_bzero.c)	- write zeroes to a byte string.
* [`ft_memset`](ft_memset.c)	- write a byte to a byte string.
* [`ft_memchr`](ft_memchr.c)	- locate byte in byte string.
* [`ft_memcmp`](ft_memcmp.c)	- compare byte string.
* [`ft_memmove`](ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
* [`ft_memccpy`](ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](ft_strlen.c)		- find length of string.
* [`ft_strchr`](ft_strchr.c)		- locate character in string (first occurrence).
* [`ft_strrchr`](ft_strrchr.c)		- locate character in string (last occurence).
* [`ft_strnstr`](ft_strnstr.c)		- locate a substring in a string (size-bounded).
* [`ft_strncmp`](ft_strncmp.c)		- compare strings (size-bounded).
* [`ft_strlcpy`](ft_strlcpy.c)		- copy strings (size-bounded).
* [`ft_strncpy`](ft_strncpy.c)		- copy strings (size-bounded).
* [`ft_strdup`](ft_strdup.c)		- save a copy of a string (with malloc).
* [`ft_strlcat`](ft_strlcat.c) 		- concatenate strings (s2 into s1).

### Non-standard functions

* [`ft_putchar_fd`](ft_putchar_fd.c)	- output a character to given file.
* [`ft_putstr_fd`](ft_putstr_fd.c)	- output string to given file.
* [`ft_putendl_fd`](ft_putendl_fd.c)	- output string to given file with newline.
* [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output integer to given file.
* [`ft_itoa`](ft_itoa.c)		- convert integer to ASCII string.
* [`ft_substr`](ft_substr.c)		- extract substring from string.
* [`ft_strtrim`](ft_strtrim.c)		- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](ft_strjoin.c)		- concatenate two strings into a new string (with malloc).
* [`ft_split`](ft_split.c)		- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](ft_strmapi.c)		- create new string from modifying string with specified function.

### Bonus functions (not mandatory by the project's subject).

* [`ft_lstnew`](ft_lstnew.c)		- create new list.
* [`ft_lstlast`](ft_lstlast.c)		- find last element of list.
* [`ft_lstadd_back`](ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](ft_lstdelone.c)	- delete element from list.
* [`ft_lstclear`](ft_lstclear.c)	- delete sequence of elements of list from a starting point.

### Later added functions

* [`ft_atof`](ft_atof.c)		- convert ASCII string to integer.
* [`get_next_line`](get_next_line.c)	- returning NULL-terminated line while reading buffer by given size chunks.
* [`ft_memclean`](ft_memclean.c)	- free memory allocated for a pointer. 

## Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```
