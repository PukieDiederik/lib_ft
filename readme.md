# Libft
This is a library for C which recreates functions from libc and also adds some extra. This was a project from 42 Lisboa
and was used for learning purposes.

## How to install
This project uses a makefile to compile everything. To compile it run:
```bash
make
```
This compiles the core, functionality for lists and get_next_line. If you don't want lists or get_next_line you can run:
```bash
make [core|list|gnl]
```
If you have not added a module to your library file, you can add them by running the command above with the desired
module.

## Functions

### Core:
The following functions work the same as in libc (without the `ft_` prefix)
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi


- ft_substr // Takes a string, start position and length. Then mallocs a new string with the contents from the original string
- ft_strjoin // Takes 2 strings, joins them together
- ft_strtrim // Takes 2 strings, removes characters show in second string from the start and end of the first string
- ft_split // takes a string and a character. Splits the string into an array of substrings where it is split on the char
- ft_itoa // Converts integer into a string
- ft_strmapi // Takes a string and a function (which takes the position in the string and a char)
, applies the function to each character in a copy of the string
- ft_striteri // Takes a string and a function (which takes a char), applies the function to each char


- ft_putstr_fd // writes a string to a fd
- ft_putendl_fd // writes a string to a fd, and adds a newline
- ft_putnbr_fd // writes a number to a fd

### Lists:
List is a struct with a (void * content), and a (t_list *next)
- ft_lstnew // Mallocs a ned node and takes content to initialize
- ft_lstadd_front // Adds a node the the start of the list
- ft_lstsize // Gets the length of the list
- ft_lstlast // Gets the last node of the list
- ft_lstadd_back // Adds a node to the end of a list
- ft_lstdelone // Takes a delete function and applies it to the content of a node and frees the memory of the node
- ft_lstclear // Deletes and frees every node of a list
- ft_lstiter // Iterates the list and applies a function to the content of each node
- ft_lstmap // Creates a copy of a list and applies a function to the content of each element

### GNL:
gets next line in a file.
- get_next_line // Takes a fd and gets the next line