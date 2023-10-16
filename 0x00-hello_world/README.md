#### 0x00. C - Hello, World

##### Below are Materials to assist you in understanding the concept

https://github.com/alx-tools/Betty

[C Programming](https://intranet.alxswe.com/concepts/26 "C Programming")

[Hello World](https://www.youtube.com/watch?v=co0b0xLEuRM&feature=youtu.be "Hello World")

[Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw "Everything you need to know to start with C.pdf")

[Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g "Dennis Ritchie")

[“C” Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ "“C” Programming Language: Brian Kernighan")

[Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw "Learning to program in C part 1")

[Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ "Learning to program in C part 2")

[Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw "Why C Programming Is Awesome")

[Betty Coding Style](https://intranet.alxswe.com/rltoken/Iu2Vb1CbDPMHuDJG1iILKA "Betty Coding Style")

[Hash-bang under the hood (Look at only after you finish consuming the other resources)](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg "Hash-bang under the hood (Look at only after you finish consuming the other resources)")

[Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA "Linus Torvalds on C vs. C++ (Look at only after you finish consuming the other resources)")



General
Why C programming is awesome
Who invented C
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
What happens when you type gcc main.c
What is an entry point
What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc
What is the default program name when compiling with gcc
What is the official C coding style and how to check your code with betty-style
How to find the right header to include in your source code when using a standard library function
How does the main function influence the return value of the program

Requirements
C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file at the root of the repo, containing a description of the repository
A README.md file, at the root of the folder of this project, containing a description of the project
There should be no errors and no warnings during compilation
You are not allowed to use system
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


Shell Scripts
Allowed editors: vi, vim, emacs
All your scripts will be tested on Ubuntu 20.04 LTS
All your scripts should be exactly two lines long ($ wc -l file should print 2)
All your files should end with a new line
The first line of all your files should be exactly #!/bin/bash

Betty linter
To run the Betty linter just with command betty <filename>:

Go to the Betty repository
Clone the repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:


#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

Once saved, exit file and change permissions to apply to all users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!


Question #0
What is the common extension for a C source file?


#.c


.txt


.py


.cpp

Question #1
Which command can be used to compile a C source file?


c-compiler


#gcc


bash

Question #2
In which category belongs the C programming language?


#Compiled language


Interpreted language

Question #3
What are the different steps to form an executable file from C source code


#Preprocessing, compilation, assembly, and linking


Interpretation, compilation and assembly


Preprocessing and compilation


Interpretation, assembly and compilation


Compilation and linking

Question #4
What is the common extension for a C header file?


.hpp


.header


.ch


#.h

Question #5
Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?


/* Comment /* nested */ */

// Comment

# Comment

##/* Comment */

/*
Comment
*/

##/*
 * Comment
 */
Tasks


0. Preprocessor
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c

julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 


1. Compiler
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o

2. Assembler
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a script that generates the assembly code of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s


3. Name
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a script that compiles a C file and creates an executable named cisfun.

The C file name will be saved in the variable $CFILE


4. Hello, puts
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function puts
You are not allowed to use printf
Your program should end with the value 0


5. Hello, printf
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option


6. Size is not grandeur, and territory does not make a nation
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a C program that prints the size of various types on the computer it is compiled and run on.

You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option


7. Intel
#advanced
Score: 65.0% (Checks completed: 100.0%)
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

The C file name will be saved in the variable $CFILE.
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s


8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
#advanced
Score: 65.0% (Checks completed: 100.0%)
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1
Your program should compile without any warnings when using the -Wall gcc option



