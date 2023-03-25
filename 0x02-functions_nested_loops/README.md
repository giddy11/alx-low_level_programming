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
