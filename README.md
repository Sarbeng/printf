# printf
Writing our own printf function.

## Synopsis
This is a simple implementation of printf function that formats and prints data

## Description
The _printf() function produces output according to a format which is described
below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %u: Prints unsigned integers
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
+ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string

## HOW DOES IT WORK

Using a composite data type such as **struct** which will contain the declaration of a char pointer `*fmt` and a pointer to a function called `*func`, this will be receiving a type val_list which will be the list of arguments from format, that will be printed in case there is a match between the struct first argument (fmt) and the format.

![struture defined](https://i.imgur.com/yp02tVM.png)

So the format is a string which characters will be printed without modification (literally), until the string found the format specifiers which start with the **% character**, and when there is a match between the specifier in the struct and in the format it will indicate the location to the function and this function will print out the string, character or Number, depends the function.

So this is an example of a struct that will call different functions for printing: char, string and numbers depending the match.

![structure](https://i.imgur.com/8xRWeEn.png)

This is example of the string format with the specifiers and the arguments as well.

**Len** is going to be the the number of characters the function _printf is going to print out. 

![code line](https://i.imgur.com/FwfNlEz.png)

This will be the output:

![Output](https://i.imgur.com/Ub9jFY5.png)

We use different functions in order to split the work. We use different functions; for example a function for getting the match between the format and the struct, functions for printing out the string, for printing out a char and a number.

***Example of the function that match the characters***

This is the function that finds the match between the char ("c","s","d","i", "%") in struct `st_format` and the `format` string. and also if there is not match it will print the % and the next character that is different to the ones in the struct

![Example 1](https://i.imgur.com/ZcFOBfA.png)

![Example 2](https://i.imgur.com/gcLsMpq.png)

## HOW TO DOWNLOAD

you can go to the clone or downloaded green botton and copy the link that it will provided

![Clone Repository](https://i.imgur.com/5PrtuPG.png)

or use directly this link:

[https://github.com/Sarbeng/printf.git](https://github.com/Sarbeng/printf.git)

Go to you terminal and type
```Bash
git clone [link you just copied]
```
then you will have the repository in your computer

Once you do that you can use this main template and fallow the instructions for compilation


## AUTHORS

[Kwadwo Sarbeng-Baafi](https://github.com/sarbeng) and [Nana Ekow Arhinful](https://github.com/sarbeng)
