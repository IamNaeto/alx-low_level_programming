# 0x12. C - singly_linked_lists Project #
* Resource
* Read about [data structures](https://alx-intranet.hbtn.io/concepts/120) first.
* [Linked Lists](https://alx-intranet.hbtn.io/rltoken/joxg32-tt4lUh8Afgst8tA) 2008 UNSW Lecture.
* [Linked Lists Youtube Playlist](https://alx-intranet.hbtn.io/rltoken/epKUCIcoA6XaN1T3Vtr_9w)
<hr />

* All the ```*-main.c``` files will be stored in the main directory.

* Use this data structure.

```
 /**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  * for Holberton project
 */
 typedef struct list_s
 {
 	char *str;
 	unsigned int len;
 	struct list_s *next;
 } list_t;
 ```
 
## Tasks ##
0. Print list : A function that prints all the elements of a ```list_t``` list.
* Prototype: ```size_t print_list(const list_t *h);```
* Return: the number of nodes.
* Format:
```
 julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
 julien@ubuntu:~/0x12. Singly linked lists$ ./a
 [5] Hello
 [5] World
 -> 2 elements

 [0] (nil)
 [5] World
 -> 2 elements
 julien@ubuntu:~/0x12. Singly linked lists$
 ```

* If ```str``` is ```NULL,``` print ```[0] (nil)```
* You are allowed to use ```printf.```
* Compile the code this way: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/0-main.c 0-print_list.c -o a```

1. List length : A function that returns the number of elements in a linked ```list_t``` list.
* Prototype: ```size_t list_len(const list_t *h);```
Compile the code this way: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/1-main.c 1-list_len.c -o b```

2. Add node : A function that adds a new node at the beginning of a ```list_t``` list.
* Prototype: ```list_t *add_node(list_t **head, const char *str);```
* Return: the address of the new element, or ```NULL``` if it failed.
* ```str``` needs to be duplicated.
* You are allowed to use ```strdup.```
* Compile the code this way: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/2-main.c 2-add_node.c 0-print_list.c -o c```

3. Add node at the end : A function that adds a new node at the end of a ```list_t``` list.
* Prototype: ```list_t *add_node_end(list_t **head, const char *str);```
* Return: the address of the new element, or ```NULL``` if it failed.
* ```str``` needs to be duplicated.
* You are allowed to use ```strdup```.
* Compile the code this way: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/3-main.c 3-add_node_end.c 0-print_list.c -o d```

4. Free list : A function that frees a ```list_t``` list.
* Prototype: ```void free_list(list_t *head);```
* Compile the code this way: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e```
<hr />

![image](https://user-images.githubusercontent.com/105589308/197057997-da9c4c09-a781-44f9-a3ab-4a31df7de1b7.png)


5. The Hare and the Tortoise : A function that prints ```You're beat! and yet, you must allow,\nI bore my house upon my back!\n``` before the ```main``` function is executed.
* You are allowed to use the ```printf``` function.
* Compile the code this way: ```gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main/100-main.c 100-first.c -o first```

6. Real programmers can write assembly code in any language : A 64-bit program in assembly that prints ```Hello, Holberton``` followed by a new line.
* You are only allowed to use ```printf``` function.
* You are not allowed to use interrupts.
* Your program will be compiled using ```nasm``` and ```gcc``` this way: ```nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello```
