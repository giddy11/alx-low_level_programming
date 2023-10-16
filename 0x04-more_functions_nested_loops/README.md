







Tasks
0. isupper
mandatory
Score: 91.25% (Checks completed: 100.0%)
Write a function that checks for uppercase character.

Prototype: int _isupper(int c);
Returns 1 if c is uppercase
Returns 0 otherwise
FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.



1. isdigit
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that checks for a digit (0 through 9).

Prototype: int _isdigit(int c);
Returns 1 if c is a digit
Returns 0 otherwise
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.



2. Collaboration is multiplication
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that multiplies two integers.

Prototype: int mul(int a, int b);


3. The numbers speak for themselves
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: void print_numbers(void);
You can only use _putchar twice in your code



4. I believe in numbers and signs
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: void print_most_numbers(void);
Do not print 2 and 4
You can only use _putchar twice in your code


5. Numbers constitute the only universal language
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

Prototype: void more_numbers(void);
You can only use _putchar three times in your code



6. The shortest distance between two points is a straight line
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that draws a straight line in the terminal.

Prototype: void print_line(int n);
You can only use _putchar function to print
Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n


7. I feel like I am diagonally parked in a parallel universe
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that draws a diagonal line on the terminal.

Prototype: void print_diagonal(int n);
You can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n


8. You are so much sunshine in every square inch
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints a square, followed by a new line.

Prototype: void print_square(int size);
You can only use _putchar function to print
Where size is the size of the square
If size is 0 or less, the function should print only a new line
Use the character # to print the square


9. Fizz-Buzz
mandatory
Score: 27.86% (Checks completed: 42.86%)
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

Each number or word should be separated by a space
You are allowed to use the standard library


10. Triangles
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints a triangle, followed by a new line.

Prototype: void print_triangle(int size);
You can only use _putchar function to print
Where size is the size of the triangle
If size is 0 or less, the function should print only a new line
Use the character # to print the triangle


11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
#advanced
Score: 0.0% (Checks completed: 0.0%)
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.

Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

You are allowed to use the standard library
Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm


12. Numbers have life; they're not just symbols on paper
#advanced
Score: 59.58% (Checks completed: 91.67%)
Write a function that prints an integer.

Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values

# Function Prototype, Nested While Loop, and Header Files in C Programming
Functions are sets of instructions that perform a specific task. In C programming, function prototypes are used to declare the function before calling it.

Nested while loops refer to a loop inside another loop. They are used to iterate through each element in a multidimensional data structure like a 2D array or a matrix.

Header files in C programming contain function prototypes and declarations for functions and variables that are used across multiple source files.

## Function Prototype
Function prototypes are declarations of a function's name, return type, and parameters. They are necessary when calling a function before its definition.
### Syntax
```c
    return_type function_name(parameter_list);
```
### Example
```c
    int add_numbers(int num1, int num2);  // Function prototype

    int main() 
    {
        int sum = add_numbers(5, 10);
        printf("%d", sum);
        return 0;
    }

    int add_numbers(int num1, int num2) {  // Function definition
        return num1 + num2;
    }
```
Note: It's common practice to define all functions before the main function.

## Nested While Loop
Nested while loops are similar to nested for loops but use while statements instead.
### Syntax
```c
    while (outer_condition)
     {
        while (inner_condition)
        {
            // code block
        }
    }
```

### Example
```c
    int main(void)
{
	int c, i;

	c = 0;
	while (c < 3)
	{
		i = 0;
		while (i < 5)
		{
			if (i > 9)
				putchar(i / 10 + '0');

			putchar(i % 10 + '0');
			i++;
		}
		c++;
		putchar(10);
	}
}
```
This produces the output
```c
    01234
    01234
    01234
```
## 1. Header Files
Header files are used to declare functions, variables and data structures in C programming. They contain function prototypes and declarations that are used across multiple source files.
### Syntax
```c
    #include <header_file_name.h>
```
### Example
Let's say we have two source files `main.c` and `math_funcs.c`. We want to use a function add_numbers defined in `math_funcs.c` file in our `main.c` file. We can create a header file named `math_funcs.h` and include it in both files.

`main_funcs.h:`
```c
    #ifndef MATH_FUNCS_H
    #define MATH_FUNCS_H

    int add_numbers(int num1, int num2);

    #endif
```
`main_funcs.c:`
```c
    #include "math_funcs.h"
    
    int add_numbers(int num1, int num2) 
    {
        return num1 + num2;
    }    
```
`main.c:`
```c
    #include <stdio.h>
    #include "math_funcs.h"
    
    int main()
    {
        int sum = add_numbers(5, 10);
        printf("%d", sum);
        return 0;
    }
```
Note: The header file should be enclosed in an `#ifndef` and `#endif` preprocessor directives to avoid errors if the header file is included more than once.

## Conclusion
Function prototypes, nested while loops, and header files are crucial concepts in C programming. Function prototypes are used to declare a function before calling it, nested while loops are used to iterate through multidimensional data structures, and header files are used to declare functions, variables, and data structures across multiple source files.
