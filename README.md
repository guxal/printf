# _printf


[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

_printf is a function that should take any n number of parameters and print it in simple output program. Depending of their data type or special cases that will be explained in detail below.

# How to compile this repository
The files  and program are written in C so we will use the gcc compiler. keep in mind that this repository is currently being compiled in gcc 4.8.4 using the current flags  -Wall -Werror -Wextra and -pedantic.

You need to have the header of this repository in the directory you are going to compile everything so it works. In this case you need to have "holberton.h" when you do this compile like this:
```$ gcc -Wall -Werror -Wextra -pedantic *.c```

# _printf features
  - this _printf can handle the following special flags, keep in mind that this is a work in progress so there are still missing flags:
  - ("%")
  - ("%c")
  - ("%s")
  - ("%i")
  - ("%d")
  - ("%%")
  - ("%(unknown)")
  - (work in progress)
# Conversion Specifiers
In this section we will explain  what every current flag does and what it takes:
- %c: print a single character Ex: _printf("hello %c", 'H'); 
- %s: print a string of characters Ex: _printf("Hello %s", "World!"); 
- %d: print a decimal (base 10) number Ex: _printf("show me this %d", 1000); 
- %i: print an integer in base 10 Ex: _printf("show me this %i", 2500); 
- %%: print a percent sign Ex: _printf("%%"); 


# Header File
```C
int _putchar(char c);
int _printf(const char *format, ...);
int switched(va_list ptr, const char *format, char c, unsigned char *s, int d);
int print_string(unsigned char *c);
int print_number(int d);
```
How to activate the man:
```$ man ./man_3_printf```


### Installation

Install the dependencies and devDependencies and start the server.

```sh
Git clone <this repository>
gcc -Wall -Werror -Wextra -pedantic *.c
./a.out
```
Enjoy
## Plugins
in development:

-Binary
-rot13
-Hexadecimal.
 
**Free Software, Hell Yeah!**
This software is open source, so anybody except Richard Dennis can Use it.
# Authors
Fidel Fernando Caicedo Castaño and Jonathan Cardenas Tobon.
