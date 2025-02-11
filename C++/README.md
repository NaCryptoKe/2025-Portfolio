# Updated February, 11, 2025
---

# 🚀 Comprehensive C++ Learning Roadmap (Updated)

## 🎯 **Goal**  
Build a strong foundation in C++ while progressively working on practical projects to reinforce learning.

---

## 📅 **Accelerated Monthly Breakdown**  
*(Updated to reflect a faster learning pace of ~2 hours per day)*

### **February (Current Month): C++ Basics & Fundamentals + OOP Introduction**  
**Focus:** Master core syntax, control flow, functions, basic file I/O, and an introduction to Object-Oriented Programming (OOP).  

#### ✅ **Completed Topics:**
- Variables and data types  
- Arithmetic and conditional operators  
- Control structures (`for`, `while` loops)  
- Functions and arrays  
- Debugging basics (IDE tools, `cout`)  
- File I/O (`ifstream`, `ofstream`)

#### ✅ **Completed Projects:**
1. Unit Converter (miles ↔ kilometers)  
2. Random Number Guesser (`rand()`)  
3. Simple Calculator (using `switch` statements)  
4. Multiplication Table Generator  
5. Sum of Numbers Calculator (`while` loops)  
6. Prime Number Checker  
7. Validation Function (`bool isValidNumber(string input)`)  
8. Array Reversal  
9. Average Score Calculator  
10. Password Strength Checker  
11. File handling projects (Write, Read, Append, Word Counter)  

#### 🔜 **Next Steps for February:**
- **Deep Dive into OOP Concepts**
  - Classes and objects  
  - Access specifiers (`public`, `private`, `protected`)  
  - Constructors and destructors  
  - Method overloading  
  - Memory management (`new`, `delete`)  
  - Dynamic memory allocation  

#### 🎯 **Upcoming Projects:**
1. **BankAccount Class:** Implement deposit, withdrawal, and balance check features.  
2. **Student Grade Tracker:** Store multiple subjects, calculate GPA, and manage student records.  
3. **Library Management System:** Track book borrowing/returning, manage inventory.

---

# 📅 **March: Advanced OOP + STL Containers & Algorithms**  

## 🎯 **Objective:**  
Deepen object-oriented programming (OOP) skills and gain mastery over the Standard Template Library (STL) for efficient data handling and algorithmic operations.

---

## 🔑 **Key Topics & Concepts:**  

### 🏗️ **Advanced OOP Principles**  
- Inheritance & Polymorphism: Designing extensible and modular code  
- Virtual Functions & Abstract Classes: Enforcing structure in derived classes  
- Smart Pointers (`std::unique_ptr`, `std::shared_ptr`): Managing dynamic memory safely  

### 📦 **STL Containers & Algorithms**  
- **Containers:** `vector`, `map`, `set`, `queue` – Usage, advantages, and best practices  
- **Algorithms:**  
  - Sorting: `std::sort`, custom comparator functions  
  - Searching: `std::find`, `std::binary_search`  
  - Iterators & Range-Based Loops: Efficient container traversal  

---

## 🛠️ **Hands-on Projects:**  

### 1️⃣ **Employee Management System** *(Inheritance & Polymorphism)*  
🔹 Develop a structured system to manage employee records using OOP principles.  
🔹 Implement multiple employee types (full-time, part-time, contract) via inheritance.  
🔹 Utilize polymorphism for dynamic salary calculations and reporting.  
🔹 Store employee data persistently using file handling.  

### 2️⃣ **Inventory Tracker** *(STL Containers & Iterators)*  
🔹 Build an inventory system to track products, stock levels, and transactions.  
🔹 Leverage STL containers (`vector`, `map`, `unordered_map`) for efficient data management.  
🔹 Implement search, update, and reporting functionalities.  
🔹 Optimize performance using STL algorithms for sorting and filtering.  

### 3️⃣ **Word Frequency Counter** *(Maps & Iterators)*  
🔹 Create a text analysis tool to count word occurrences in documents.  
🔹 Use `std::map` and `unordered_map` to store and retrieve word frequencies.  
🔹 Implement iterators for efficient text traversal and processing.  
🔹 Add features like case normalization, stop-word filtering, and export functionality.  

---

## 📚 **Learning Resources**  

### 🎥 **Video Courses:**  
- [C++ OOP & Inheritance (The Cherno)](https://www.youtube.com/watch?v=wN0x9eZLix4) - Deep dive into inheritance and polymorphism.  
- [STL Containers & Algorithms (CodeVault)](https://www.youtube.com/playlist?list=PLk6CEY9XxSIAfHRlM78AyFdlk0S4nf1fF) - Comprehensive tutorial on STL.  
- [Smart Pointers in C++ (The Cherno)](https://www.youtube.com/watch?v=UOB7-B2MfwA) - Understanding modern memory management.  

### 📖 **Documentation & Articles:**  
- [C++ STL Reference (cplusplus.com)](https://cplusplus.com/reference/stl/) - Detailed STL documentation.  
- [Smart Pointers (cppreference.com)](https://en.cppreference.com/w/cpp/memory) - Official documentation on modern memory management.  
- [Effective STL (Book by Scott Meyers)](https://www.amazon.com/Effective-STL-Specific-Standard-Template/dp/0201749629) - Must-read for mastering STL.  

### 💻 **Practice & Challenges:**  
- [LeetCode - C++ Problems](https://leetcode.com/problemset/all/?difficulty=Easy&difficulty=Medium&difficulty=Hard&listId=xi4ci4eq) - Strengthen algorithmic thinking using STL.  
- [HackerRank - STL Exercises](https://www.hackerrank.com/domains/tutorials/10-days-of-cpp) - Hands-on STL exercises.  
- [CodeForces - C++ Practice](https://codeforces.com/) - Competitive programming with real-world problem-solving.  


---  

## 📌 **Expected Outcomes**  
✅ Mastery of **OOP principles** such as inheritance, polymorphism, and abstraction in real-world applications.  
✅ Proficiency in **STL containers** (`vector`, `map`, `set`, `queue`) and **STL algorithms** (`std::sort`, `std::find`).  
✅ Hands-on experience with **memory management** using smart pointers (`std::unique_ptr`, `std::shared_ptr`).  
✅ Completion of **three structured projects**, showcasing OOP and STL expertise in practical applications.  

🚀 **By the end of March, I should have a solid foundation in advanced C++ programming, allowing me to confidently tackle more complex topics.**  

---

# 📅 **April: Memory Management & Advanced OOP Concepts**  

## 🎯 **Objective:**  
Develop a deep understanding of **memory management**, advanced **OOP design patterns**, and **exception handling** to write efficient and robust C++ programs.  

---

## 🔑 **Key Topics & Concepts**  

### 🧠 **Memory Management & Smart Pointers**  
- `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr` – When and how to use them  
- Manual memory management with `new` and `delete`  
- Memory leaks and how to **detect/prevent** them  

### 🚧 **Exception Handling & Error Management**  
- Proper use of `try-catch` blocks for handling runtime errors  
- Custom exception classes for specific error scenarios  
- Best practices for writing exception-safe code  

### 🔄 **RAII (Resource Acquisition Is Initialization)**  
- Using RAII to manage resources safely  
- Preventing resource leaks in dynamic memory, file handling, and database connections  

### 🛠️ **Debugging & Optimization**  
- **Using `gdb`** for runtime debugging and crash analysis  
- **Valgrind** for memory leak detection and performance profiling  
- Identifying bottlenecks and optimizing memory usage  

---

## 🛠️ **Hands-on Projects:**  

### 1️⃣ **Custom Memory Manager** *(Manual Memory Allocation & Deallocation)*  
🔹 Implement a lightweight memory management system that efficiently allocates and deallocates memory.  
🔹 Track memory blocks, prevent fragmentation, and handle out-of-memory conditions.  
🔹 Gain in-depth knowledge of heap memory and pointer arithmetic.  

### 2️⃣ **Resource Handler** *(Managing File & Database Connections)*  
🔹 Build a resource management system that handles file streams and database connections safely.  
🔹 Utilize RAII to automatically release resources when they are no longer needed.  
🔹 Prevent resource leaks and ensure proper cleanup.  

### 3️⃣ **Exception-Safe File Handling System** *(Robust Error Handling in File I/O)*  
🔹 Create a file processing application that gracefully handles unexpected errors (missing files, permissions, etc.).  
🔹 Use exception handling to ensure stability under failure scenarios.  
🔹 Implement logging to track and debug runtime issues.  

---

## 📚 **Learning Resources**  

### 🎥 **Video Courses:**  
- [Modern C++ Memory Management (The Cherno)](https://www.youtube.com/watch?v=UOB7-B2MfwA) – Smart pointers and best practices.  
- [C++ Exception Handling (Programming with Mosh)](https://www.youtube.com/watch?v=R6I3Nf4M4sg) – Deep dive into `try-catch`.  
- [Valgrind Memory Debugging (CppNuts)](https://www.youtube.com/watch?v=JzqHhtAaj38) – Profiling and leak detection.  

### 📖 **Documentation & Articles:**  
- [C++ Smart Pointers (cppreference.com)](https://en.cppreference.com/w/cpp/memory) – Official documentation.  
- [RAII in C++ (GeeksforGeeks)](https://www.geeksforgeeks.org/resource-acquisition-is-initialization-raii-in-c/) – RAII concepts and use cases.  
- [Effective C++ (Scott Meyers)](https://www.amazon.com/Effective-Modern-Specific-Ways-Improve/dp/1491903996) – Covers modern C++ best practices.  

### 💻 **Practice & Challenges:**  
- [LeetCode - Memory Management Problems](https://leetcode.com/problemset/) – Advanced memory optimization exercises.  
- [HackerRank - Exception Handling Challenges](https://www.hackerrank.com/domains/tutorials/10-days-of-cpp) – Practical exception handling problems.  
- [CodeForces - Debugging & Optimization](https://codeforces.com/) – Competitive programming for efficient debugging.  

---

## 📌 **Expected Outcomes:**  
✔️ Strong understanding of **memory management**, including manual allocation and smart pointers.  
✔️ Ability to write **exception-safe** code and handle runtime errors effectively.  
✔️ Mastery of **RAII principles** for managing system resources safely.  
✔️ Proficiency in **debugging and performance profiling** with `gdb` and Valgrind.  
✔️ Completion of **three structured projects**, demonstrating expertise in memory management and robust system design.  

🚀 **By the end of April, I should be confident in writing high-performance, memory-efficient, and error-resistant C++ applications!**  

---

# 📅 **May: Advanced Templates & Multithreading**  

## 🎯 **Objective:**  
Master **C++ templates** for generic programming and delve into **multithreading** for parallel execution and thread safety.  

---

## 🔑 **Key Topics & Concepts**  

### 🏗️ **Advanced Templates**  
- **Template Functions & Classes** – Writing reusable and type-independent code.  
- **Variadic Templates** – Handling multiple arguments in a flexible way.  
- **SFINAE (Substitution Failure Is Not An Error)** – Understanding how templates are resolved.  
- **Concepts (C++20)** – Type constraints for cleaner template programming.  

### ⚡ **Multithreading & Concurrency**  
- **`std::thread`** – Creating and managing multiple threads.  
- **Synchronization Mechanisms:**  
  - **`std::mutex`** – Preventing race conditions.  
  - **`std::lock_guard` & `std::unique_lock`** – Ensuring safe access to shared data.  
- **Thread Communication:**  
  - **Condition Variables** – Synchronizing thread execution.  
  - **Thread Pools** – Managing a collection of reusable worker threads.  
- **Parallel Programming Techniques:**  
  - **Using `std::async` & `std::future`** for task-based concurrency.  
  - **Atomic Operations (`std::atomic`)** – Avoiding data races without explicit locks.  

---

## 🛠️ **Hands-on Projects:**  

### 1️⃣ **Generic Math Library** *(Templated Functions & Classes)*  
🔹 Implement a reusable **math utility library** that supports various numeric types.  
🔹 Use **function templates** for operations like `add`, `subtract`, `multiply`, etc.  
🔹 Implement **class templates** for handling matrices, vectors, and other structures.  
🔹 Leverage **concepts (C++20)** for type constraints where applicable.  

### 2️⃣ **Multithreaded File Processor** *(Concurrent File Handling)*  
🔹 Build a **high-performance file processing system** that reads, processes, and writes files in parallel.  
🔹 Use **multiple threads** to speed up large file operations.  
🔹 Implement **mutexes and locks** to ensure safe file access.  
🔹 Optimize with **thread pools** for efficient resource management.  

### 3️⃣ **Threaded Task Scheduler** *(Managing Concurrent Tasks)*  
🔹 Design a **task scheduler** that efficiently manages and executes scheduled jobs in parallel.  
🔹 Implement **priority queues** for task execution order.  
🔹 Use **condition variables** to synchronize execution.  
🔹 Handle **graceful shutdown** and task cancellation.  

---

## 📚 **Learning Resources**  

### 🎥 **Video Courses:**  
- [C++ Templates (The Cherno)](https://www.youtube.com/watch?v=I-hZkUa9mIs) – A beginner-friendly guide to templates.  
- [Multithreading in C++ (CodeVault)](https://www.youtube.com/watch?v=QpAhX-gsHMs) – Covers `std::thread`, `std::mutex`, and more.  
- [Concurrency & Parallelism in C++ (Nicolai Josuttis)](https://www.youtube.com/watch?v=8AEbYx70Vrk) – Deep dive into modern concurrency techniques.  

### 📖 **Documentation & Articles:**  
- [C++ Templates (cppreference.com)](https://en.cppreference.com/w/cpp/language/templates) – Official documentation.  
- [Concurrency in C++ (GeeksforGeeks)](https://www.geeksforgeeks.org/multithreading-in-cpp/) – Covers synchronization mechanisms.  
- [Effective Modern C++ (Scott Meyers)](https://www.amazon.com/Effective-Modern-Specific-Ways-Improve/dp/1491903996) – Best practices for modern C++.  

### 💻 **Practice & Challenges:**  
- [LeetCode - Multithreading Problems](https://leetcode.com/problemset/all/) – Real-world threading challenges.  
- [HackerRank - C++ Templates](https://www.hackerrank.com/domains/tutorials/10-days-of-cpp) – Practical template programming problems.  
- [CodeForces - Parallel Programming Challenges](https://codeforces.com/) – Performance-based competition problems.  

---

## 📌 **Expected Outcomes:**  
✔️ Deep understanding of **C++ templates**, including function templates, class templates, and variadic templates.  
✔️ Ability to write **efficient concurrent applications** using `std::thread`, `std::mutex`, and other synchronization tools.  
✔️ Hands-on experience in **parallel processing** and **thread-safe programming**.  
✔️ Completion of **three structured projects**, showcasing expertise in **templates, multithreading, and task scheduling**.  

🚀 **By the end of May, I should be proficient in writing generic, high-performance, and thread-safe C++ applications!**  

---

# 🎮 **June: Graphics & Game Development Basics**  

## 🎯 **Objective:**  
Gain hands-on experience with **2D rendering**, **input handling**, and **game loops** to build foundational skills in **game development**.  

---

## 🔑 **Key Topics & Concepts**  

### 🖥️ **Rendering & Graphics Fundamentals**  
- **Setting up a rendering window** (SFML, SDL, or OpenGL).  
- **Drawing shapes & sprites** – Understanding coordinate systems, colors, and transformations.  
- **Double buffering** – Avoid flickering and ensure smooth rendering.  

### 🎮 **Game Loop & Input Handling**  
- **Event-driven programming** – Handling keyboard, mouse, and controller input.  
- **Frame rate & time management** – Using `deltaTime` for smooth movement.  
- **Game loop architecture** – Updating, rendering, and processing input efficiently.  

### 🔍 **Collision Detection & Object Interaction**  
- **Axis-Aligned Bounding Box (AABB) Collision** – Checking for simple object collisions.  
- **Circle-based collision detection** – Useful for ball physics and circular objects.  
- **Basic physics handling** – Velocity, acceleration, and rebound mechanics.  

---

## 🛠️ **Hands-on Projects:**  

### 1️⃣ **Pong Game** *(Paddle Controls & Ball Physics)*  
🔹 Implement **player-controlled paddles** with smooth movement.  
🔹 Add **ball physics** – velocity, acceleration, and bouncing.  
🔹 Implement **collision detection** between paddles and the ball.  
🔹 Include **score tracking and UI** for a complete game experience.  

### 2️⃣ **Interactive Paint Tool** *(Basic Drawing Application)*  
🔹 Create a **simple paint tool** with **mouse-based drawing**.  
🔹 Implement **color selection** and **brush size customization**.  
🔹 Add **basic shape drawing** (lines, rectangles, circles).  
🔹 Include **save/load functionality** for preserving user artwork.  

### 3️⃣ **Sprite Animation System** *(Using Spritesheets)*  
🔹 Load and render **spritesheets** for smooth 2D animations.  
🔹 Implement **frame-based animation**, switching between sprite frames.  
🔹 Add **character movement controls** with **animated walking/running**.  
🔹 Optimize rendering performance with **texture atlases**.  

---

## 📚 **Learning Resources**  

### 🎥 **Video Courses & Tutorials:**  
- [**Game Programming in C++ (TheCherno)**](https://www.youtube.com/playlist?list=PLlrATfBNZ98dC-V-Nh8BmkxZRMcZ9KMwF) – Covers game loop, rendering, and event handling.  
- [**SFML Game Development (Sonar Learning)**](https://www.youtube.com/playlist?list=PLivfKP2ufIK7SCuf1SevuT-7nXqg9iDAS) – Hands-on SFML game development.  
- [**SDL2 Tutorials (Lazy Foo’ Productions)**](https://lazyfoo.net/tutorials/SDL/) – Covers SDL setup, input handling, and rendering.  

### 📖 **Documentation & Articles:**  
- [**SFML Official Documentation**](https://www.sfml-dev.org/documentation/2.6.0/) – Reference for 2D rendering, input, and audio.  
- [**SDL Official Documentation**](https://wiki.libsdl.org/) – Covers event handling, graphics, and physics.  
- [**Collision Detection Explained (gamedevelopment.tutsplus.com)**](https://gamedevelopment.tutsplus.com/series/collision-detection-for-beginners--gamedev-337) – Great introduction to collision algorithms.  

### 💻 **Practice & Challenges:**  
- [Raylib - Open-Source Game Development](https://www.raylib.com/) – A lightweight alternative to SDL/SFML.  
- [Itch.io Game Jams](https://itch.io/jams) – Participate in **game development challenges**.  
- [GitHub Open Source Game Projects](https://github.com/topics/game-development) – Explore existing C++ game projects.  

---

## 📌 **Expected Outcomes:**  
✔️ Understanding of **2D rendering, sprites, and event-driven programming**.  
✔️ Ability to **build interactive applications and simple games** using SFML/SDL.  
✔️ Hands-on experience in **collision detection and basic physics implementation**.  
✔️ Completion of **three structured projects**, demonstrating **graphics programming and game logic skills**.  

🚀 **By the end of June, I should be capable of building small 2D games and interactive tools using C++!**    

---

# 🎯 **July - December: Advanced Topics & Final Large-Scale Projects**  

Since progress is accelerating, this phase will focus on **in-depth and complex topics**, with an emphasis on **graphics, physics, engine development, and a final large-scale project**.  

---

## 📆 **Timeline & Key Topics**  

### 🎨 **July - August: 3D Graphics with OpenGL**  
🔹 Understanding **OpenGL Rendering Pipeline** (Shaders, Buffers, Textures).  
🔹 **3D transformations & camera movement** (Matrix Math, Perspective Projection).  
🔹 **Lighting & Materials** (Phong Shading, Normal Mapping).  
🔹 **Model Loading** (OBJ, FBX file parsing).  
🔹 **Basic Physics & Animation** (Skeletal Animation, Keyframe Interpolation).  

### ✅**Mini-Project 1: 3D Model Viewer**  
🔹 **Objective:** Create an application that loads and displays 3D models with basic lighting, textures, and camera controls.  
🔹 **Key Concepts:**
- **Model loading** from file formats like `.obj` or `.fbx`.
- **Basic transformations**: Scale, translate, rotate 3D objects.
- **Lighting**: Implement point light and directional light sources.
- **Textures**: Load and apply textures to models.
- **Camera control**: Use mouse and keyboard to navigate the scene.
- **Shader programming**: Write vertex and fragment shaders for rendering the 3D models.

### ✅**Mini-Project 2: Basic Physics Sandbox**  
🔹 **Objective:** Implement a simple physics engine to simulate object movements under the influence of gravity and collisions.  
🔹 **Key Concepts:**
- **Rigid body dynamics**: Apply forces like gravity, friction, and velocity to objects.
- **Collision detection**: Detect and resolve collisions between objects using AABB (Axis-Aligned Bounding Box).
- **Basic particle systems**: Implement particle effects for things like smoke or sparks.
- **User interaction**: Allow users to add/remove objects or adjust physics parameters. 

📚 **Resources:**  
- [Learn OpenGL](https://learnopengl.com/) – Comprehensive guide to OpenGL.  
- [OpenGL SuperBible](https://www.openglsuperbible.com/) – Advanced OpenGL techniques.  
- [Joey de Vries' OpenGL Tutorial](https://github.com/JoeyDeVries/LearnOpenGL) – Source code for OpenGL projects.  

---

### 🔍 **September: Physics & Collision Detection**  
🔹 **Physics Engines** – Implementing **basic physics simulation**.  
🔹 **Collision Detection Algorithms** (AABB, SAT, Raycasting).  
🔹 **Rigid Body Dynamics** (Gravity, Friction, Forces).  
🔹 **Particle Systems** (Smoke, Fire, Water effects).  

🛠 **Project:**    
### ✅**Mini-Project 1: Physics Sandbox**  
🔹 **Objective:** Expand the basic physics engine to include more realistic collision detection, particle effects, and interaction.  
🔹 **Key Concepts:**
- **Advanced collision algorithms**: Implement Separating Axis Theorem (SAT) or circle-circle collisions.
- **Particle effects**: Use particle systems for explosions, water, etc.
- **Multiple object interaction**: Handle interactions between multiple colliding objects.
- **Visual debugging**: Use visual aids like wireframe boxes to debug physics interactions.

📚 **Resources:**  
- [GDC Talks on Physics](https://www.gdcvault.com/) – Industry insights on game physics.  
- [Real-Time Collision Detection (Christer Ericson)](https://www.realtimerendering.com/intersections.html) – Book on efficient physics techniques.  
- [Box2D Physics Engine](https://box2d.org/) – Open-source physics library.  

---

### 🏗 **October - November: Game Engine Development**  
🔹 **Understanding Engine Architecture** (Game Loop, ECS, Asset Management).  
🔹 **Building a Rendering Engine** (Scene Graph, Custom Shader System).  
🔹 **Input & Audio Systems** (Controller Support, Sound Effects).  
🔹 **Scripting Integration** (Lua or Python for Modding Support).  
🔹 **Optimization Techniques** (Multithreading, Memory Management).  

🛠 **Project:**  
### **Mini-Project 1: Basic 2D/3D Game Engine**  
🔹 **Objective:** Build the foundation of a custom game engine, focusing on the game loop, asset management, and rendering.  
🔹 **Key Concepts:**
- **Game loop**: Implement a basic loop that updates game logic, renders the screen, and handles input.
- **Rendering system**: Create a system to handle 2D/3D rendering (using OpenGL or a 2D engine like SFML).
- **Asset management**: Load and manage game assets like textures, sounds, and models.
- **Basic event handling**: Handle user inputs like keyboard and mouse.
- **Camera system**: Set up a camera to view the game world in 3D.

### **Mini-Project 2: Custom Physics Engine**  
🔹 **Objective:** Implement a simple but robust physics engine for use in your game engine, including rigid body dynamics and collision detection.  
🔹 **Key Concepts:**
- **Rigid body physics**: Implement basic physics properties like velocity, mass, and acceleration.
- **Collision detection**: Integrate a physics-based collision detection system.
- **Collision resolution**: Ensure objects bounce off or stop when colliding with each other.
- **Optimization**: Use broad-phase and narrow-phase collision detection to optimize performance.

📚 **Resources:**  
- [Game Engine Architecture (Jason Gregory)](https://www.gameenginebook.com/) – Deep dive into engine development.  
- [Game Programming Patterns](https://gameprogrammingpatterns.com/) – Learn how to structure game engines.  
- [The Cherno's Game Engine Series](https://www.youtube.com/playlist?list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2) – C++ engine dev tutorials.  

---

### 🚀 **December: Final Large-Scale Project**  
This month will be dedicated to a **portfolio-worthy C++ application**, demonstrating **mastery of advanced concepts**.  

✅ **Potential Projects:**  
- 🎮 **A Small 2D/3D Game Engine** – Fully featured with physics, rendering, and scripting.  
- 🔢 **Data Structures & Algorithm Visualizer** – Interactive tool for learning algorithms.  
- 💰 **Finance Tracker** – A data-driven personal finance application.  
- 🤖 **AI-Based Tool** – A C++ AI project leveraging machine learning.  
- 📂 **Large File Processor** – High-performance data processing tool.  

📌 **Final Deliverables:**  
✔️ **Fully documented project** with source code on GitHub.  
✔️ **Performance benchmarks & optimizations**.  
✔️ **Project demo video** showcasing features.  
✔️ **Write-up / Blog post** explaining the project development process.  

---

## 🎯 **Expected Outcomes:**  
✔️ **Proficiency in OpenGL & 3D Graphics Programming**.  
✔️ **Understanding of Game Physics & Collision Detection**.  
✔️ **Ability to Build a Game Engine from Scratch**.  
✔️ **Completion of a High-Quality Portfolio Project**.  
✔️ **Deep Knowledge of Performance Optimization & System Design**.  

🚀 **By the end of the year, I should be capable of building complex C++ applications and game engines!**  

---

### 📚 **Recommended Books & Resources**
- *C++ Primer* by Lippman et al.  
- *Effective Modern C++* by Scott Meyers  
- [CPPReference](https://en.cppreference.com)  
- [Learn OpenGL](https://learnopengl.com)  

🎉 **Happy Coding! Now go build amazing things in C++!**

