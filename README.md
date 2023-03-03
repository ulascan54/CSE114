# CSE114

---

## Out Put(Print Text)

To output values or print text in C, you can use the printf() function:

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```

You can use as many printf() functions as you want. However, note that it does not insert a new line at the end of the output:

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  return 0;
}
```

---

## New Lines

To insert a new line, you can use the \n character:

```c
#include <stdio.h>

int main() {
  printf("Hello World!\n");
  printf("I am learning C.");
  //or
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");

  return 0;
}
```

#### What is \n exactly?

The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

Examples of other valid escape sequences are:
| Escape Sequence | Description |
| ----------- | ----------- |
| \t | Creates a horizontal tab |
| \\\ | Inserts a backslash character (\) |
| \" | Inserts a double quote character|

---

## Comments in C

- Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.

- Comments can be singled-lined or multi-lined.

### Single-line Comments

Single-line comments start with two forward slashes (//).

Any text between // and the end of the line is ignored by the compiler (will not be executed).

This example uses a single-line comment before a line of code:

```c
// This is a comment
printf("Hello World!");
printf("Hello World!"); // This is a comment
```

### C Multi-line Comments

Multi-line comments start with /_ and ends with _/.
Any text between /_ and _/ will be ignored by the compiler:

```c
/* The code below will print the words Hello World!
to the screen, and it is amazing */
printf("Hello World!");
```

---

## C Variables

Variables are containers for storing data values, like numbers and characters.

In C, there are different types of variables (defined with different keywords), for example:

- int - stores integers (whole numbers), without decimals, such as 123 or -123

- float - stores floating point numbers, with decimals, such as 19.99 or -19.99

- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

#### Declaring (Creating) Variables

To create a variable, specify the type and assign it a value:

```c
type variableName = value;
```

Where type is one of C types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign a value to the variable.

So, to create a variable that should store a number, look at the following example:
