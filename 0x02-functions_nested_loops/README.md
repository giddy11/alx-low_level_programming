# Functions and Nested Loops in C
Functions are sets of instructions that perform a specific task. They can be called multiple times to execute the same set of instructions.

Nested loops refer to a loop inside another loop. It is used to iterate through each element in a multidimensional data structure like a 2D array or a matrix.

# Functions Syntax

```c
    return_type function_name(parameters)
    {
        // code block
        return output;
    }
```

# Example
```c
    int add_numbers (int num1, int num2)
    {
        int result = num1 + num2;
        return result;
    }
```

# Calling a Function
Once a function is defined, it can be called by using its name followed by parentheses containing the necessary arguments.
```c
    int sum = add_numbers(5, 10);
```

# Nested Loops Syntax
```c
    for (outer_loop_variable; outer_loop_condition; outer_loop_increment) 
    {
        for (inner_loop_variable; inner_loop_condition; inner_loop_increment) 
        {
            // code block
        }
    }
```

# Example
```c
    int hour, minute;
  
  for (hour = 0; hour < 1; hour++) 
  {  // Iterate over hours
    for (minute = 0; minute < 3; minute++) 
    {  // Iterate over minutes
      putchar(hour / 10 + '0');  // Print the tens digit of hour
      putchar(hour % 10 + '0');  // Print the ones digit of hour
      putchar(':');  // Print the separator
      putchar(minute / 10 + '0');  // Print the tens digit of minute
      putchar(minute % 10 + '0');  // Print the ones digit of minute
      putchar('\n');  // Print a newline character
    }
  }
```
This produces the output:
```
    00:00
    00:01
    00:02
```
# Conclusion
Functions and nested loops are crucial concepts in C programming. They help to modularize code and process data structures efficiently.


https://www.youtube.com/watch?v=Z3iGeQ1gIss
http://www.tutorialspoint.com/cprogramming/c_functions.htm
https://www.youtube.com/watch?v=qMlnFwYdqIw
https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/
https://www.tutorialspoint.com/cprogramming/c_header_files.htm

Quiz questions
Great! You've completed the quiz successfully! Keep going! (Hide quiz)
Question #0
What is the result of 89 % 7?


2


0


5


3

Question #1
What is the result of 12 % 3?


1


0


3


2

Question #2
What is the ASCII value of A?


65


97


1


12

Question #3
What is the result of 12 % 2?


0


1


2

Question #4
What is the ASCII value of J?


72


70


76


74

Question #5
Which of these loop statements don’t exist?


each


while


loop_to


for


foreach


do... while

Question #6
What is the ASCII value of 5?


50


53


5

Question #7
What is the ASCII value of -?


45


3


47

Question #8
What is the ASCII value of a?


65


97


1


12

Question #9
What is the ASCII value of 0?


79


0


48

Question #10
What is the result of 12 % 10?


1


0


3


2


Tasks
0. _putchar
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints _putchar, followed by a new line.

The program should return 0


1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that prints the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet(void);
You can only use _putchar twice in your code


2. 10 x alphabet
mandatory
Score: 95.0% (Checks completed: 100.0%)
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code


3. islower
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that checks for lowercase character.

Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise
FYI: The standard library provides a similar function: islower. Run man islower to learn more.


4. isalpha
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that checks for alphabetic character.

Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise
FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.


5. Sign
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints the sign of a number.

Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero


6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that computes the absolute value of an integer.

Prototype: int _abs(int);
FYI: The standard library provides a similar function: abs. Run man abs to learn more.


7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit


8. I'm federal agent Jack Bauer, and today is the longest day of my life
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

Prototype: void jack_bauer(void);
You can listen to this soundtrack while coding :)
https://www.youtube.com/watch?v=btAfXqgMkPs


9. Learn your times table
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints the 9 times table, starting with 0.

Prototype: void times_table(void);
Format: see example


10. a + b
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that adds two integers and returns the result.

Prototype: int add(int, int);

11. 98 Battery Street, the OG
mandatory
Score: 65.0% (Checks completed: 100.0%)
Write a function that prints all natural numbers from n to 98, followed by a new line.

Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library


12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself
#advanced
Score: 24.38% (Checks completed: 37.5%)
Write a function that prints the n times table, starting with 0.

Prototype: void print_times_table(int n);
If n is greater than 15 or less than 0 the function should not print anything
Format: see example


13. Nature made the natural numbers; All else is the work of women
#advanced
Score: 0.0% (Checks completed: 0.0%)
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

You are allowed to use the standard library


14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers must be separated by comma, followed by a space , 
You are allowed to use the standard library

15. Even Liber Abbaci
#advanced
Score: 0.0% (Checks completed: 0.0%)
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

You are allowed to use the standard library


16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+
#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers should be separated by comma, followed by a space ,
You are allowed to use the standard library
You are not allowed to use any other library (You can’t use GMP etc…)
You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
You are not allowed to hard code any Fibonacci number (except for 1 and 2)



