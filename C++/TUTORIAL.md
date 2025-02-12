# C++ Primer Short Notes

# Chapter 1: Getting Started

---

## Writing a simple C++ Program

A C++ program contains 1 or more functions, one must be the `main` function. The `main` function is the entry of the program.

```
int main()
{
  return 0;
}
```

A `function` definition has four elements, **returntype** (int), **function name** (main), **parameter list** enclosed in parenthesis and might be empty, as in the case for the main function, **function body** the content of the function in between the curly braces.

C++ is a **case sensetive**, and uses **;** to indicate the end of a statement.

---

## A first look at Input/Output
C++ doesn't have a defined statement so it uses an extensive **standard library**. The library in this case is the **iostream** library. The **iostream** is composed of two types, **istream** and **ostream**. A **stream** is a sequence of characters read or written to an **IO**(input output) device.
The **iiostream** library defines four IO objects. To handle input, **istream** named `cin`. Refered to us as **standard input**. For output we use the **ostream** name `cout`. Also named as the **standard output**. There are two other **ostream** named **cerr** `(used for standard error)` and **clog** `(general information)`
Usage:
```
#include <iostream>
int main()
{
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
  return 0;
}
```

The output is as follows:
**Enter two numbers:**
Waits for the user the two numbers denoted by `v1` and `v2`
The user inputs: **3 7**
On a newline the program produces the following output
**The sum of 3 and 7 is 10**

**#include <iostream>** tells the compiler that we want to use the **iostream** library.
**std::endl** is called a `manipulator`and has the effect of starting a new line

The prefix **std::** indicates that the names following it are defined the namespace named **std**
**Namespace** is used to avoid  inadvertent collisions between the names we define and uses of those same names inside a library.
The **::** sign is called the `scope operator`

---

## A word about comments
**Comments** are non executable line on the code, used for describe or write a message on. There are two types of comments: **Inline** used for commenting at the end of a statement usind the `\\` sign; and a **Multiline** comment which can span more than one line, and is mostly used to describe what a block of code does rather than one statement.

```
#include <iostream>
/*
* Simple main function:
* Read two numbers and write their sum
*/
int main()
{
  // prompt user to enter two numbers
  std::cout << "Enter two numbers:" << std::endl;
  int v1 = 0, v2 = 0; // variables to hold the input we read
  std::cin >> v1 >> v2; // read input
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
  return 0;
}
```

**N.B** Comments don't nest

---

## Flow of control
Statements often get executed sequentially: when they avoid that in some condition, those conditions are know as **Flow Control**
Flow Controls are the following: **Iterative** (while, for, do-while), **Conditionals** (if, else-if, swithc, ternary operations), **Jump Statements** (break, continue, goto, return)

---

# Variables and Basic Types
**Types** determine the meaning of a data how we can use it.

---

## Primitive Built-in Types
**Primitive Data Type** are built-in data types that represent the simples and most directly supported by the language.
It is divided in to two:
  - Arithmetic Types
  - Special character called **void**

**void** type doesn't have no associated value and is mostly used for return type on `functions`

### Arithmetic Types
The **Arthimetic Types** are divided into two, which are **integral types** (character, boolean, and numbers without floating numbers), and **floating-point types**

| Type  | Meaning | Minimum Size |
|:------------|:------------:|------------:|
| bool | boolean | N/A |
| char | character | 8 bits |
| wchar_t | wide character | 16 bits |
| char16_t | unicode character | 16bits |
| char32_t | unicode character | 32 bits |
| short | short integer | 16 bits |
| int | integer | 16 bits |
| long | long integer | 32 bits |
| long long | long integer | 64 bits |
| float | single-precision floating-point | 6 significant digits |
| double | double-precision floating-point | 10 significant digits |
| long double | extended-precision floating-point | 10 significant digits |

**size of (type/variable)** is used for determining the size of the data type using bytes.

Most of the datatypes with in the table are used for supporting internationalization.

The basics are `int`, `float`, `double`, `char`, `bool`.
**bool** stores true or false values. **char** stores a character using its `ASCII CODE`. **int** for non-floating integers. **float** and **double** for floating integers.

---
<details>
<summary> <strong>MACHINE-LEVEL REPRESENTATION OF THE BUILT-IN TYPES</strong> </summary>
Computers store data as a sequence of **bits**, each holding a `0` or `1`, such as
      00011011011100010110010000111011 ...
Most computers deal with memory as chunks of bits of sizes that are powers of `2`. The smallest chunk of addressable memory is referred to as a **byte**. The basic unit of storage, usually a small number of bytes, is referred to as a **word**. In C++ a byte has at least as many bits as are needed to hold a character in the machine’s basic character set. On most machines a byte contains 8 bits and a word is either 32 or 64 bits, that is, 4 or 8 bytes.
Most computers associate a number (called an “address”) with each byte in memory. On a machine with 8-bit bytes and 32-bit words, we might view a word of memory as follows:
  - 736424 = 0 0 1 1 1 0 1 1
  - 736425 = 0 0 0 1 1 0 1 1
Here, the byte’s address is on the left, with the 8 bits of the byte following the address.
We can use an address to refer to any of several variously sized collections of bits starting at that address. It is possible to speak of the word at address 736424 or the byte at address 736427. To give meaning to memory at a given address, we must know the type of the value stored there. The type determines how many bits are used and how to interpret those bits.
If the object at location 736424 has type float and if floats on this machine are stored in 32 bits, then we know that the object at that address spans the entire word. The value of that float depends on the details of how the machine stores floatingpoint numbers. Alternatively, if the object at location 736424 is an unsigned char on a machine using the ISO-Latin-1 character set, then the byte at that address represents a semicolon.
</details>
---

#### **Signed and Unsigned Types**
Except for `bool` and the extended char types, the integral types might be signed or unsigned.
**Signed** means it holds both negative and positive values, while **Unsigned** means it only hold the positive side.
To make a data type unsigned we use the the keyword `unsigned`
```
unsigned int x = 0; // this is an unassigned int
int y = 0; // this is a signed int
```

Unlike the rest of the integral types, the `char` data type is divide into three:
  - char
  - unsigned char &
  - signed char

---

# Rules of thumb
- Use an unsigned type when you know that the values cannot be negative.
- Use int for integer arithmetic. short is usually too small and, in practice, long often has the same size as int. If your data values are larger than the minimum guaranteed size of an int, then use long long.
- Do not use plain char or bool in arithmetic expressions. Use them only to hold characters or truth values. Computations using char are especially problematic because char is signed on some machines and unsigned on others. If you need a tiny integer, explicitly specify either signed char or unsigned char.
- Use double for floating-point computations; float usually does not have enough precision, and the cost of double-precision calculations versus singleprecision is negligible. In fact, on some machines, double-precision operations are faster than single. The precision offered by long double usually is unnecessary and often entails considerable run-time cost.