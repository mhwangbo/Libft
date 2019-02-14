# Libft
Recode a number of standard C library functions as well as other utility functions that will be reused throughout 42 curriculum.

## Part 1 - Libc Functions

## Part 2 - Additional Functions
- ft_memalloc  
    Allocates (with malloc(3)) and returns a “fresh” memory area. The memory allocated is initialized to 0. If the alloca- tion fails, the function returns NULL.
- ft_memdel  
    Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
- ft_strnew  
    Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.
- ft_strdel  
    Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.
- ft_strclr  
    Sets every character of the string to the value ’\0’.
- ft_striter  
    Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.
- ft_striteri  
    Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.
- ft_strmap  
    Applies the function f to each character of the string given as argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
- ft_strmapi  
    Applies the function f to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with malloc(3)) resulting from the suc- cessive applications of f.
- ft_strequ  
    Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.
- ft_strnequ  
    Lexicographical comparison between s1 and s2 up to n char- acters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.
- ft_strsub  
    Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument. The substring begins at indexstart and is of size len. If start and len aren’t refer- ing to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.
- ft_strjoin  
    Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
- ft_strtrim  
    Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.
- ft_strsplit  
    Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) ob- tained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’) re- turns the array ["hello", "fellow", "students"].
- ft_itoa  
    Allocate (with malloc(3)) and returns a “fresh” string end- ing with ’\0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.
- ft_putchar  
    Outputs the character c to the standard output.
- ft_putstr  
    Outputs the string s to the standard output.
- ft_putendl  
    Outputs the string s to the standard output followed by a ’\n’.
- ft_putnbr  
    Outputs the integer n to the standard output.
- ft_putchar_fd  
    Outputs the char c to the file descriptor fd.
- ft_putstr_fd  
    Outputs the string s to the file descriptor fd.
- ft_putendl_fd  
    Outputs the string s to the file descriptor fd followed by a ’\n’.
- ft_putnbr_fd  
    Outputs the integer n to the file descriptor fd.
