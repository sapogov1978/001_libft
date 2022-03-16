<h1>001_libft </h1>
<h3>Recode a functions of the C standard library.</h3>

<blockquote>This project is your very first project as a student at 42. <br>You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.</blockquote>

<p>
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/sapogov1978/001_libft?color=blue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/sapogov1978/001_libft?color=blue" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/sapogov1978/001_libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/sapogov1978/001_libft?color=blue" />
</p>

This project consists of coding basic C functions (see below), which are then compiled into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isascii`](ft_isascii.c)	- test for ASCII character.
* [`ft_isalnum`](ft_isalnum.c)	- alphanumeric character test.
* [`ft_isalpha`](ft_isalpha.c)	- alphabetic character test.
* [`ft_islower`](ft_islower.c) 	- lower-case character test.
* [`ft_isupper`](ft_isupper.c) 	- upper-case character test.
* [`ft_isdigit`](ft_isdigit.c)	- decimal-digit character test.
* [`ft_isprint`](ft_isprint.c)	- printing character test (space character inclusive).
* [`ft_isspace`](ft_isspace.c) 	- white-space character test.
* [`ft_tolower`](ft_tolower.c)	- upper case to lower case letter conversion.
* [`ft_toupper`](ft_toupper.c)	- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/srcs/to/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](libft/srcs/mem/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/srcs/mem/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/srcs/mem/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/srcs/mem/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/srcs/mem/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/srcs/mem/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/srcs/mem/ft_memcpy.c)		- copy memory area.
* [`ft_memccpy`](libft/srcs/mem/ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/srcs/str/ft_strlen.c)				- find length of string.
* [`ft_strchr`](libft/srcs/str/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/srcs/str/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](libft/srcs/str/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](libft/srcs/str/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strnrcmp`](libft/srcs/str/ft_strnrcmp.c)			- reversely compare strings (size-bounded).
* [`ft_strcpy`](libft/srcs/str/ft_strcpy.c) *		- copy strings.
* [`ft_strncpy`](libft/srcs/str/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](libft/srcs/str/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strcat`](libft/srcs/str/ft_strcat.c) *		- concatenate strings (s2 into s1).

### Non-standard functions

* [`ft_putchar`](libft/srcs/put/ft_putchar.c) *	- output a character to stdout.
* [`ft_putchar_fd`](libft/srcs/put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/srcs/put/ft_putstr.c) *		- output string to stdout.
* [`ft_putstr_fd`](libft/srcs/put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl`](libft/srcs/put/ft_putendl.c) *	- output string to stdout with newline.
* [`ft_putendl_fd`](libft/srcs/put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr`](libft/srcs/put/ft_putnbr.c) *		- output integer to stdout.
* [`ft_putnbr_fd`](libft/srcs/put/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](libft/srcs/to/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/srcs/str/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/srcs/str/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/srcs/str/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/srcs/str/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](libft/srcs/str/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](libft/srcs/lst/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](libft/srcs/lst/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](libft/srcs/lst/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](libft/srcs/lst/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](libft/srcs/lst/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](libft/srcs/lst/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](libft/srcs/lst/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/srcs/lst/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/srcs/lst/ft_lstmap.c)				- apply function to content of all list's elements into new list.

### Later added funtions

* [`ft_atof`](001_libft/ft_atof.c) *		- convert ASCII string to integer.

_Note: functions marked with * are bonus functions (not mandatory by the project's subject)._
