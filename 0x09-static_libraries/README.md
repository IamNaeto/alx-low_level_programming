## 0x09-static_libraries Project ##

![image](https://user-images.githubusercontent.com/105589308/194304775-87c925ad-f7dc-41b9-a28a-68e7f8396659.png)

General
What is a static library, how does it work, how to create one, and how to use it

Basic usage of ar, ranlib, nm

### NOTE All the files within this Folder are made executable ###

This project finds solutions to the following:

Tasks 0. A library is not a luxury but one of the necessities of life mandatory Create the static library libmy.a containing all the functions listed below:

int _putchar(char c); int _islower(int c); int _isalpha(int c); int _abs(int n); int _isupper(int c); int _isdigit(int c); int _strlen(char *s); void _puts(char *s); char *_strcpy(char *dest, char *src); int _atoi(char *s); char *_strcat(char *dest, char *src); char *_strncat(char *dest, char *src, int n); char *_strncpy(char *dest, char *src, int n); int _strcmp(char *s1, char *s2); char *_memset(char *s, char b, unsigned int n); char *_memcpy(char *dest, char *src, unsigned int n); char *_strchr(char *s, char c); unsigned int _strspn(char *s, char *accept); char *_strpbrk(char *s, char *accept); char *_strstr(char *haystack, char *needle); If you haven’t coded all of the above functions create empty ones with the right prototype. Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

### Note: In creating a static library ###

gcc -c *.c > This converts .c files to .o (object) files
ar rcs libmy.a *.o
ar rc libmy.a *.o > This creates the static library "Libmy.a"
ar -t libmy.a > This lists all files in libmy.a

ranlib libmy.a > This converts to random library

After creating a static library and you would want to compile for testing use:
> gcc -std=gnu89 main.c -L -lmy -o(new_file_name)
