# 0x10. C - printf

## Description

  

* In this project we are tasked with creating our own printf function (_printf) that will return the number of  characters printed and writes the output to stdout. 

 ---
 ## Example
```
#include "Holberton.h"
_printf("The %s won the Finals %d times", "Warriors", 6);
$ The Warriors won the Finals 6 times
``` 
---
## Files 

  | File  | Description |
  |--------| ------------|
  |**_printf** | will print based on input and format specifier|
   |**holberton.h** | header file with prototypes of all functions used |
   |**get_op_func** | will return the correct function to be used based on input|
   |**_char.c** | prints a character **%c** |
   |**_str.c** | prints a string **%s** |
   |**_putchar**| puts a character (replicated putchar function)|
  |**_decimal**| prints a decimal **%i** & **%d** |
  |**_unsigned.c**| prints an unsigned integer|
  |**_address.c** | prints an address|
---
# Project Requirements
-   All files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
-   Your code should use the Betty style
-   You are not allowed to use global variables
-   Authorized functions and macros:
-   write (man 2 write)
-   malloc (man 3 malloc)
-   free (man 3 free)
-   va_start (man 3 va_start)
-   va_end (man 3 va_end)
-   va_copy (man 3 va_copy)
-   va_arg (man 3 va_arg)
  
## Tasks
### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)

* Write a function that produces output according to a format: %c %s %%

  

### [1. Education is when you read the fine print. Experience is what you get if you don't](./_printf.c)

* Handle the following conversion specifiers: d, i

  

### [2. Just because it's in print doesn't mean it's the gospel](./man_3_printf)

* Create a man page for your function.

  

---

  

## Author

*  **Derrick Gee** - [kai-dg](https://github.com/kai-dg)

*  **Rashaad Colbert** - [rcolbert30](https://github.com/rcolbert30)



=======
## Description

* Write your own printf function.

---

## Tasks

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./_printf.c)
* Write a function that produces output according to a format: %c %s %%

### [1. Education is when you read the fine print. Experience is what you get if you don't](./_printf.c)
* Handle the following conversion specifiers: d, i

### [2. Just because it's in print doesn't mean it's the gospel](./man_3_printf)
* Create a man page for your function.

---

## Author
* **Derrick Gee** - [kai-dg](https://github.com/kai-dg)
* **Rashaad Colbert** - [rcolbert30](https://github.com/rcolbert30)
>>>>>>> 48e2948bcc479a1aff01f58cbaa30475cf2ffe70
