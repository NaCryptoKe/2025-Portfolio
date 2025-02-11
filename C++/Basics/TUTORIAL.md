# 📅 **Day 1: February, 01 2025**  ⏳ *Time Taken: One Hour*

## 🚀 **Learned C++ from Bro Code**
🔗 [Watch here](https://youtu.be/-TkoO8Z07hI?si=dTz7AM-FAABazGzy)

---

## ❓ **Why Learn C++?** 🖥️
✅ **Fast & Powerful** ⚡
✅ **Used in Graphics & Video Editing** 🎨🎬
✅ **Embedded Systems & Game Development** 🎮
✅ **Middle-Level Language** 🏗️

---

## 🛠️ **Things Needed to Start**
1️⃣ **Text Editors** 📝 *(e.g., VS Code, IDEs)*
2️⃣ **Compiler** 🏭 *(Converts source code to machine code)*

📂 **File Extension**: `.cpp` or `.c++`

---

## 💬 **Comments in C++** ✍️
```cpp
// This is an inline comment
/* This is a 
   multiline comment */
```

---

## 🎭 **Variables in C++** 🔢
### 🔹 **Declaration & Assignment**
```cpp
int x;  // Declaration
x = 4;  // Assignment
```

### 🖨️ **Printing Output**
```cpp
std::cout << x;  // std = standard library, cout = character output
```

---

## 📊 **Data Types in C++**
- **`int`** ➡️ Stores whole numbers 📏
  ```cpp
  int x = 5;
  ```
- **`double`** ➡️ Stores floating-point numbers 🌊
  ```cpp
  double x = 5.5;
  ```
- **`char`** ➡️ Stores a single character 🔤
  ```cpp
  char x = 'A';
  ```
- **`bool`** ➡️ Stores `true` or `false` values 🎚️
  ```cpp
  bool x = true;
  ```

🔹 *These four are called primitive data types!* 🎯

---

## 📜 **Strings in C++** 🔡
🔸 Strings are objects made up of a sequence of characters.

---

## 🔐 **Constant Variables (`const`)**
🛑 **Immutable values** (Read-Only)
```cpp
const int X = 10;  // Naming convention: ALL CAPS
```

---

## 🏷️ **Namespaces in C++** 🌍
👨‍💻 *Prevents naming conflicts in large projects!*
```cpp
namespace MyNamespace {
    int x = 10;
}
```

🎯 `::` is the **Scope Resolution Operator**

---

🎉 **That's it for today!** Keep coding and have fun! 🚀🔥

---

 ## 🚀 Day 2: February 10, 2025

### ⏳ Time Taken: One Hour and 24 minutes

### 📝 `typedef`
- `typedef` is a reserved keyword used to create an additional name (alias) for another data type.
- Helps with readability and reduces typos.
- Example:
  ```cpp
  typedef std::vector<std::pair<std::string, int>> pairlist_t;
  ```
- A common naming convention for `typedef` is to end with `_t`.
  ```cpp
  pairlist_t pairlist; // Declare a vector of pairs of strings and integers
  ```
- **Usage:** `typedef [dataType] [newName];`

### 🔥 `using` (Modern Alternative)
- Instead of `typedef`, I should be using `using`:
  ```cpp
  using [newName] = [dataType];
  ```
- `typedef` was used for C++98/03, while `using` is used for C++11 and later.
- `using` is the modern and more flexible alternative.
- You can use `using` with **templates**, unlike `typedef`.

### ⚖️ `using` vs `typedef`
- `using` is more **readable** than `typedef`.
- `using` supports **templates**.
- `using` is modern **C++ compatible**.

---

### ➕ Arithmetic Operators
- Return the result of a specific arithmetic operation (`+`, `-`, `*`, `/`, `%`).
- Example:
  ```cpp
  int students = 20;
  students = students + 1; // Same as students++; and students += 1;
  students = students - 1; // Same as students--; and students -= 1;
  students = students * 2; // Same as students *= 2;
  students = students / 3; // Same as students /= 3;
  ```
- **Important:** When dividing and the quotient is a decimal, the decimal points are **truncated** due to the variable being an `int`. Solution: Use `float` or `double`.
- **Modulus Operator `%`**: Returns the remainder.
  ```cpp
  int remainder = students % 3;
  ```
- **Order of Arithmetic:** `Parentheses > Exponents > Multiplication/Division > Addition/Subtraction`
  ```cpp
  int students = 6 - 5 + 4 * 3 / 2;
  ```

---

### 🔄 Type Conversion
- **Implicit Conversion:** Happens automatically.
  ```cpp
  int x = 3.14; // x will be set to 3 (truncation)
  ```
- **Explicit Conversion (Casting):**
  ```cpp
  double x = (int)3.14; // x is explicitly set to 3
  ```
- **Example with ASCII:**
  ```cpp
  char y = 100; // 'y' will be 'd' (ASCII value 100)
  std::cout << (char)100; // Outputs 'd'
  ```
- **When to Use:**
  ```cpp
  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;
  std::cout << score << "%"; // Correctly prints 80%
  ```

---

### 📢 `cout` and `cin`
- `cout <<` (Insertion Operator)
- `cin >>` (Extraction Operator)
- If the input contains **whitespace**, use:
  ```cpp
  std::getline(std::cin, variable);
  ```
- If `cin` precedes `getline`, use:
  ```cpp
  std::getline(std::cin >> std::ws, variable);
  ```

---

### 📐 Useful Math Functions (`#include <cmath>`) 
- `std::max(value1, value2);` → Returns **maximum**.
- `std::min(value1, value2);` → Returns **minimum**.
- `pow(base, exponent);` → Returns `base^exponent`.
- `sqrt(value);` → Returns **square root**.
- `abs(value);` → Returns **absolute value**.
- `round(x);` → Rounds to the nearest integer.
- `ceil(x);` → Rounds **up**.
- `floor(x);` → Rounds **down**.
- 📖 [More cmath functions](https://www.cplusplus.com/reference/cmath/)

---

### 🔄 Conditionals
1️⃣ **If Statement:** Executes if the condition is `true`.
   ```cpp
   if (condition) {
       // Code executes
   }
   ```
2️⃣ **If-Else Statement:** Executes one block if `true`, another if `false`.
   ```cpp
   if (condition) {
       // Executes if true
   } else {
       // Executes if false
   }
   ```
3️⃣ **Else-If Statement:** Multiple conditions.
   ```cpp
   if (condition) {
       // Code
   } else if (anotherCondition) {
       // Code
   } else {
       // Default case
   }
   ```
4️⃣ **Switch Statement:** Matches cases.
   ```cpp
   switch (variable) {
       case value1:
           // Code
           break;
       case value2:
           // Code
           break;
       default:
           // Code
           break;
   }
   ```
5️⃣ **Ternary Operator (`?:`)**
   ```cpp
   condition ? executeIfTrue : executeIfFalse;
   x % 2 ? std::cout << "Odd" : std::cout << "Even";
   ```

---

### 🔗 Logical Operators
- `&&` (Logical AND) → Both conditions must be `true`.
- `||` (Logical OR) → Only one condition needs to be `true`.
- `!` (Logical NOT) → Reverses boolean value.

| A     | B     | A && B | A || B |
|-------|-------|--------|--------|
| true  | true  | true   | true   |
| true  | false | false  | true   |
| false | true  | false  | true   |
| false | false | false  | false  |

| A     | !A    |
|-------|-------|
| true  | false |
| false | true  |

---

### 📝 Useful String Methods
```cpp
string name;
name.length();    // Returns length of string
name.empty();     // Checks if string is empty
name.clear();     // Clears string value
name.append("text"); // Appends text
name.at(index);   // Returns character at index
name.insert(index, "msg"); // Inserts msg at index
name.find(' ');   // Finds first occurrence of char
name.erase(start, end); // Erases part of string
```
📖 [More string functions](https://www.cplusplus.com/reference/string/string/)

---

# 🚀 Day 3: February 11, 2025

**⏳ Time Taken: 40 minutes**

## 🔄 Loops & Iteration

Loops execute a block of code **while** a condition is `true`. If the condition is `false`, the loop stops.

### 🔁 Infinite Loop
An **infinite loop** occurs when the condition is **always true**, causing the loop to run forever!

---

## 🌀 Types of Loops

### 1️⃣ While Loop
Executes **while** the condition remains true.
```cpp
while (condition) {
    // Statement goes here
}
```

### 2️⃣ Do-While Loop
- Similar to a **while loop**, but it **executes at least once** before checking the condition.
```cpp
do {
    // Statement
} while (condition); // Notice the semicolon at the end
```

### 3️⃣ For Loop
- Used when the number of iterations is **known**.
- Typically uses `i` as an **iterator**.
```cpp
for (int i = 0; i <= value; i++) { // Can increase or decrease
    // Statement
}
```

### 4️⃣ Nested Loops
Loops **inside** another loop.
```cpp
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
        // Inner loop statement
    }
}
```

---

## 🚦 Jump (Loop Control) Statements
Used to **alter the flow** of a loop.

### 🔚 `break`
Stops execution of the loop **immediately**.
```cpp
while (true) {
    if (condition) break; // Exit the loop
}
```

### ⏭ `continue`
Skips the **current iteration** and moves to the next.
```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) continue; // Skip iteration when i == 5
    // Other code
}
```

### 🔁 `goto`
Jumps to a labeled statement **inside the same function**.
```cpp
goto flower;
// Statements here will be skipped
flower: 
// Execution continues from here
```

### 🔙 `return`
Exits from a function and can **optionally return a value**.
```cpp
return; // Exits function
return 5; // Exits and returns 5
```

---

## 🎲 Random Numbers
C++ uses `rand()` to generate **pseudo-random numbers**.
```cpp
int num = rand(); // Gives a number between 0 and 32,767 (RAND_MAX)
```

---

## 🔧 Functions: Reusable Code Blocks
Functions **group logic** together for reusability.
```cpp
[returnType] functionName(parameters if necessary) {
    // Function body
    return something; // If returnType is not void
}
```
**`void`** means the function **does not return a value**.

```cpp
void sayHello() {
    cout << "Hello, World!";
}
```
