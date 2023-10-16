https://intranet.alxswe.com/concepts/100039
https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231016%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231016T081148Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=949d4cd1df6a3cc55b4a9f0b9ae42cece2779f96003219aaed40b229c0ae79c6

https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html
https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html
https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm
https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm
https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm
https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/
https://www.tutorialspoint.com/cprogramming/c_while_loop.htm
https://www.youtube.com/watch?v=Ju1LYO9pkaI

man or help:

ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)

General
What are the arithmetic operators and how to use them
What are the logical operators (sometimes called boolean operators) and how to use them
What the the relational operators and how to use them
What values are considered TRUE and FALSE in C
What are the boolean operators and how to use them
How to use the if, if ... else statements
How to use comments
How to declare variables of types char, int, unsigned int
How to assign values to variables
How to print the values of variables of type char, int, unsigned int with printf
How to use the while loop
How to use variables with the while loop
How to print variables using printf
What is the ASCII character set
What are the purpose of the gcc flags -m32 and -m64


# This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
Tasks
0. Positive anything is better than negative nothing
mandatory
Score: 100.0% (Checks completed: 100.0%)
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

You can find the source code here
The variable n will store a different value every time you will run this program
You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
The output of the program should be:
The number, followed by
if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative
followed by a new line

julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 

# This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
1. The last digit
mandatory
Score: 100.0% (Checks completed: 100.0%)
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

You can find the source code here
The variable n will store a different value every time you run this program
You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
The output of the program should be:
The string Last digit of, followed by
n, followed by
the string is, followed by
if the last digit of n is greater than 5: the string and is greater than 5
if the last digit of n is 0: the string and is 0
if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line

julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$


# Write a program that prints the alphabet in lowercase, followed by a new line.
2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints the alphabet in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code


# Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
3. alphABET
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code


# Write a program that prints the alphabet in lowercase, followed by a new line.
4. When I was having that alphabet soup, I never thought that it would pay off
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code


# Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
5. Numbers
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

All your code should be in the main function

# Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
6. Numberz
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your code
All your code should be in the main function

# Write a program that prints the lowercase alphabet in reverse, followed by a new line.
7. Smile in the mirror
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints the lowercase alphabet in reverse, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code


# Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
8. Hexadecimal
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code


# Write a program that prints all possible combinations of single-digit numbers.
9. Patience, persistence and perspiration make an unbeatable combination for success
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char


# Write a program that prints all possible different combinations of two digits.
10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
#advanced
Score: 65.0% (Checks completed: 100.0%)
Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function

# Write a program that prints all possible different combinations of three digits.
11. The success combination in business is: Do what you do better... and: do more of what you do...
#advanced
Score: 65.0% (Checks completed: 100.0%)
Write a program that prints all possible different combinations of three digits.

Numbers must be separated by ,, followed by a space
The three digits must be different
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
Print only the smallest combination of three digits
Numbers should be printed in ascending order, with three digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar six times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function

# Write a program that prints all possible combinations of two two-digit numbers.
12. Software is eating the World
#advanced
Score: 65.0% (Checks completed: 100.0%)
Write a program that prints all possible combinations of two two-digit numbers.

The numbers should range from 0 to 99
The two numbers should be separated by a space
All numbers should be printed with two digits. 1 should be printed as 01
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar eight times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
