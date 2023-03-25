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
