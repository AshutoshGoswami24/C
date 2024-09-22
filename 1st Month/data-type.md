# Data Types in C

C provides a variety of data types for defining variables and working with different kinds of values. These data types can be grouped into several categories:

## 1. Basic Data Types
- **int**: Integer data type for whole numbers.
  - Example: `int age = 25;`
- **float**: Single-precision floating-point data type for decimal numbers.
  - Example: `float pi = 3.14;`
- **double**: Double-precision floating-point data type for more accurate decimal numbers.
  - Example: `double bigPi = 3.1415926535;`
- **char**: Character data type for storing single characters.
  - Example: `char letter = 'A';`

## 2. Derived Data Types
- **Arrays**: A collection of elements of the same type.
  - Example: `int numbers[5] = {1, 2, 3, 4, 5};`
- **Pointers**: Variables that store the memory address of another variable.
  - Example: `int *ptr = &age;`
- **Structures**: User-defined data type that allows grouping different types.
  - Example:
    ```c
    struct Person {
        char name[50];
        int age;
    };
    ```
- **Unions**: Like structures, but share the same memory location for all members.
  - Example:
    ```c
    union Data {
        int i;
        float f;
        char str[20];
    };
    ```

## 3. Enumeration Data Type
- **enum**: Used to define a set of named integer constants.
  - Example:
    ```c
    enum Color { RED, GREEN, BLUE };
    enum Color myColor = RED;
    ```

## 4. Void Data Type
- **void**: Represents the absence of type, typically used in functions.
  - Example: `void myFunction() { /* code */ }`

## Type Modifiers
- **signed**: Represents both positive and negative values.
  - Example: `signed int a = -10;`
- **unsigned**: Represents only non-negative values.
  - Example: `unsigned int b = 10;`
- **short**: Smaller range for integers.
  - Example: `short int c = 32000;`
- **long**: Larger range for integers.
  - Example: `long int d = 100000L;`

## Example Code
Here’s an example demonstrating basic data types in C:

```c
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    
    return 0;
}
```
