# LIBFT
Libft, your first project !!!!
Libft is a foundational project at 42 School. The goal is to recreate a custom version of the C standard library (libc), implementing a variety of functions for string manipulation, memory management, and linked list operations. This library will serve as a base for future projects at 42.

Repository Structure
The project is divided into three main sections:


1. Mandatory Part - Libc Functions

In this section, you will recreate standard library functions, grouped by their functionality:


Memory Manipulation

>ft_memset - Fill a block of memory with a specific value.

>ft_bzero - Set a block of memory to zero.

>ft_memcpy - Copy memory from one location to another.

>ft_memmove - Copy memory with overlapping regions safely.

>ft_memchr - Locate a byte in memory.

>ft_memcmp - Compare blocks of memory.

String Manipulation

>ft_strlen - Get the length of a string.

>ft_strlcpy - Copy a string with a size limit.

>ft_strlcat - Concatenate strings with a size limit.

>ft_strchr - Locate the first occurrence of a character in a string.

>ft_strrchr - Locate the last occurrence of a character in a string.

>ft_strnstr - Find a substring in a string within a specific length.

>ft_strncmp - Compare two strings up to a specific length.

>ft_strdup - Duplicate a string.

Character Checks and Transformations

>ft_isalpha - Check if a character is alphabetic.

>ft_isdigit - Check if a character is a digit.

>ft_isalnum - Check if a character is alphanumeric.

>ft_isascii - Check if a character is an ASCII character.

>ft_isprint - Check if a character is printable.

>ft_toupper - Convert a character to uppercase.

>ft_tolower - Convert a character to lowercase.

Conversion Functions

>ft_atoi - Convert a string to an integer.

Memory Allocation

>ft_calloc - Allocate memory and initialize it to zero.

2. Additional Functions

These functions are not part of the standard library but are frequently used in programming.

String and Memory Operations

>ft_substr - Extract a substring from a string.

>ft_strjoin - Join two strings into one.

>ft_strtrim - Remove specified characters from the start and end of a string.

>ft_split - Split a string into an array of substrings based on a delimiter.

>ft_itoa - Convert an integer to a string.

>ft_strmapi - Create a new string by applying a function to each character of a string.

>ft_striteri - Apply a function to each character of a string with its index.

File Descriptor Functions

>ft_putchar_fd - Write a character to a file descriptor.

>ft_putstr_fd - Write a string to a file descriptor.

>ft_putendl_fd - Write a string followed by a newline to a file descriptor.

>ft_putnbr_fd - Write an integer to a file descriptor.

3. Bonus Part - Linked List Functions

These functions are designed to manipulate singly linked lists:

>ft_lstnew - Create a new node.

>ft_lstadd_front - Add a node to the beginning of the list.

>ft_lstadd_back - Add a node to the end of the list.

>ft_lstsize - Count the number of nodes in a list.

>ft_lstlast - Get the last node in a list.

>ft_lstdelone - Delete a node and free its memory.

>ft_lstclear - Delete all nodes in a list.

>ft_lstiter - Apply a function to each node in the list.
>ft_lstmap - Apply a function to each node and create a new list.

