# **C++ Primer: Short Notes** 🚀

## **Chapter 1: Getting Started**
---

### **Writing a Simple C++ Program** 🖥️
A C++ program contains **one or more functions**, and one of them **must** be the `main` function. The `main` function is the **entry point** of the program.

```cpp
int main() {
    return 0;
}
```

A **function** definition consists of four elements:
1. **Return type** (`int` in this case)
2. **Function name** (`main`)
3. **Parameter list** (enclosed in parentheses, which can be empty)
4. **Function body** (enclosed in curly braces `{}`)

🔹 **C++ is case-sensitive** and uses **`;` (semicolon)** to indicate the end of a statement.

---

### **A First Look at Input/Output** 📝
C++ does not have built-in input/output (I/O) statements. Instead, it uses an **extensive standard library**, specifically the **iostream** library.

The **iostream** library defines four I/O objects:
- **`cin`** (standard input - `istream`)
- **`cout`** (standard output - `ostream`)
- **`cerr`** (standard error - `ostream`)
- **`clog`** (log messages - `ostream`)

Example usage:
```cpp
#include <iostream>
int main() {
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
```
📌 **Key Points:**
- `#include <iostream>` tells the compiler to use the **iostream** library.
- `std::endl` moves to a new line.
- `std::` is a **namespace qualifier**, used to avoid name conflicts.
- `::` is called the **scope resolution operator**.

---

### **A Word About Comments** 🗨️
**Comments** are **non-executable** lines in the code used for explanations or notes.

Types of comments:
1. **Single-line comment** → `// This is a comment`
2. **Multi-line comment** → `/* This is a multi-line comment */`

Example:
```cpp
#include <iostream>
/*
 * Simple main function:
 * Reads two numbers and writes their sum
 */
int main() {
    // Prompt user to enter two numbers
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0; // Variables to hold input values
    std::cin >> v1 >> v2; // Read input
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}
```
⚠️ **Note:** Comments do NOT nest!

---

### **Flow of Control** 🔀
Statements in C++ execute sequentially unless controlled by **Flow Control Statements**:
- **Iterative Statements:** `while`, `for`, `do-while`
- **Conditional Statements:** `if`, `else-if`, `switch`, ternary (`? :`)
- **Jump Statements:** `break`, `continue`, `goto`, `return`

---

## **Variables and Basic Types** 📊
Data types define the **meaning of data** and how we can use it.

### **Primitive Built-in Types** 🔢
Built-in data types in C++ represent fundamental values. They are classified into:
1. **Arithmetic Types**
2. **Special type:** `void` (no associated value, mainly used as a function return type)

#### **Arithmetic Types**
Arithmetic types are further divided into **integral types** (characters, boolean, integers) and **floating-point types**.

| **Type**      | **Meaning**                         | **Minimum Size**  |
|--------------|---------------------------------|----------------|
| `bool`       | Boolean (true/false)            | N/A            |
| `char`       | Character                       | 8 bits         |
| `wchar_t`    | Wide character                  | 16 bits        |
| `char16_t`   | Unicode character               | 16 bits        |
| `char32_t`   | Unicode character               | 32 bits        |
| `short`      | Short integer                   | 16 bits        |
| `int`        | Integer                         | 16 bits        |
| `long`       | Long integer                    | 32 bits        |
| `long long`  | Very long integer               | 64 bits        |
| `float`      | Single-precision float          | 6 significant digits |
| `double`     | Double-precision float          | 10 significant digits |
| `long double`| Extended-precision float        | 10+ significant digits |

🔍 **To check the size of a type:**
```cpp
std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
```
---
<details>
<summary> <strong>MACHINE-LEVEL REPRESENTATION OF THE BUILT-IN TYPES</strong> </summary>

Computers store data as a sequence of **bits**, each holding a `0` or `1`, such as:
```
00011011011100010110010000111011 ...
```
Most computers manage memory in **chunks of bits** that are powers of `2`. The smallest addressable chunk is called a **byte**, while the basic unit of storage (typically a small number of bytes) is referred to as a **word**.

🔹 **Byte**: The smallest unit of memory, typically 8 bits.  
🔹 **Word**: A storage unit, usually 4 or 8 bytes (32 or 64 bits).

In C++, a **byte** contains at least enough bits to hold a character in the machine’s basic character set. Most modern machines use **8-bit bytes** and **32-bit or 64-bit words**.

### **Memory Representation Example**
On a system with 8-bit bytes and 32-bit words, memory may be structured like this:
```
  736424 = 0 0 1 1 1 0 1 1
  736425 = 0 0 0 1 1 0 1 1
```
Here, the **byte’s address** is on the left, with its **8-bit content** following.

### **Addressing Memory**
A memory address can refer to various-sized collections of bits. For example:
- A **word** at address `736424` (assuming 32-bit words) spans 4 bytes.
- A **byte** at address `736427` refers to an 8-bit value.

To understand the **meaning** of a memory location, we must know its **data type**:
- If the object at `736424` is of type `float` (stored in 32 bits), it spans the entire word.
- If the object at `736424` is an **unsigned char** (on a system using ISO-Latin-1), the byte at that address represents a **semicolon (`;`)**.

💡 **Key Takeaways:**
- Memory consists of bytes, grouped into words.
- Addresses point to specific memory locations.
- The type of data determines the size and interpretation of stored bits.

</details>
---

### **Signed and Unsigned Types** ➕➖
🔹 **Signed types** can hold **negative and positive values**.  
🔹 **Unsigned types** can hold **only positive values**.  

To declare an unsigned variable:
```cpp
unsigned int x = 0; // Unsigned integer
int y = -5;         // Signed integer
```

📌 **Special case for `char` type:**
- `char`
- `unsigned char`
- `signed char`

---

### **Rules of Thumb** 🎯
✅ Use **unsigned types** when values cannot be negative.  
✅ Use **int** for arithmetic; avoid `short` and `long` unless necessary.  
✅ Avoid using **plain `char` or `bool` in arithmetic expressions**.  
✅ Use **double** for floating-point calculations (`float` may lack precision).  
✅ `long double` is rarely needed and may slow down computations.  

---
🎉 **End of Notes!** Keep coding and exploring C++! 🚀🔥

