# 🏛️ **Libft**  
[![42](https://img.shields.io/badge/-000000?style=for-the-badge&logo=42&logoColor=white)](https://42.fr) [![1337](https://img.shields.io/badge/1337-000000?style=for-the-badge&logo=1337&logoColor=white)](https://1337.ma) [![Language](https://img.shields.io/badge/C-Programming-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))  

---

## 📖 **Introduction**
**Libft** is the first project of the 42 curriculum. The goal is to create a custom library in C, replicating a set of standard functions from `<string.h>`, `<stdlib.h>`, and more. This library will serve as a foundation for future projects.

---

## 🏗️ **Functions Included**
### 🧠 **Libc Functions**
- `ft_memset` – Fill memory with a constant byte  
- `ft_bzero` – Write zeros to a byte string  
- `ft_memcpy` – Copy memory area  
- `ft_memmove` – Copy memory area with overlap protection  
- `ft_memchr` – Locate a byte in memory  
- `ft_memcmp` – Compare memory areas  
- `ft_strlen` – Calculate the length of a string  
- `ft_strlcpy` – Copy a string with size limit  
- `ft_strlcat` – Append a string with size limit  
- `ft_strchr` – Locate a character in a string  
- `ft_strrchr` – Locate a character in a string (starting from the end)  
- `ft_strnstr` – Locate a substring within a string  
- `ft_strncmp` – Compare two strings  
- `ft_atoi` – Convert a string to an integer  
- `ft_isalpha` – Check if a character is alphabetic  
- `ft_isdigit` – Check if a character is a digit  
- `ft_isalnum` – Check if a character is alphanumeric  
- `ft_isascii` – Check if a character is an ASCII value  
- `ft_isprint` – Check if a character is printable  
- `ft_toupper` – Convert a character to uppercase  
- `ft_tolower` – Convert a character to lowercase  
- `ft_calloc` – Allocate memory and set it to zero  
- `ft_strdup` – Duplicate a string  

---

### 🔤 **Additional String Functions**
- `ft_substr` – Extract a substring from a string  
- `ft_strjoin` – Concatenate two strings  
- `ft_strtrim` – Trim characters from the beginning and end of a string  
- `ft_split` – Split a string into an array of substrings  
- `ft_itoa` – Convert an integer to a string  
- `ft_strmapi` – Apply a function to each character of a string  
- `ft_striteri` – Apply a function to each character of a string (by reference)  

---

### 🖋️ **File Descriptor Functions**
- `ft_putchar_fd` – Write a character to a file descriptor  
- `ft_putstr_fd` – Write a string to a file descriptor  
- `ft_putendl_fd` – Write a string followed by a newline to a file descriptor  
- `ft_putnbr_fd` – Write an integer to a file descriptor  

---

### 🪢 **Linked List Functions**
- `ft_lstnew` – Create a new list element  
- `ft_lstadd_front` – Add an element at the beginning of a list  
- `ft_lstadd_back` – Add an element at the end of a list  
- `ft_lstsize` – Get the size of a list  
- `ft_lstlast` – Get the last element of a list  
- `ft_lstdelone` – Delete a single element from a list  
- `ft_lstclear` – Delete all elements from a list  
- `ft_lstiter` – Apply a function to each element of a list  
- `ft_lstmap` – Create a new list by applying a function to each element  

---

## 🧪 **Testing**
Run the test script to check all functions:  
```bash
make test
