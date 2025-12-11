# C++ Learning Cheatsheet

A comprehensive collection of C++ example programs organized by topic, perfect for beginners learning C++ fundamentals.

## 📚 Overview

This repository contains well-organized C++ examples covering core programming concepts from basic syntax to advanced topics like functions and recursion. Each program is designed to illustrate specific C++ features with practical, runnable code.

**Based on:** Codecademy's C++ course and W3Schools tutorials  
**Reference:** [Codecademy C++ Cheatsheet](https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-hello-world/cheatsheet)

## 🗂️ Repository Structure

```text
cpp-cheatsheet/
├── 01_hello_world/      # Introduction to C++ basics
│   ├── hello_world.cpp  # Your first C++ program
│   ├── comments.cpp     # Single and multi-line comments
│   ├── initials.cpp     # ASCII art output
│   └── multiline.cpp    # Multi-line output examples
│
├── 02_variables/        # Variables and data types
│   ├── variable.cpp     # Variable declaration and initialization
│   ├── input.cpp        # User input with std::cin
│   ├── currency.cpp     # Currency conversion calculator
│   ├── temperature.cpp  # Temperature conversions
│   ├── math.cpp         # Mathematical operations
│   └── quadratic.cpp    # Quadratic equation solver
│
├── 03_conditions/       # Conditional statements
│   ├── if.cpp           # Basic if statements
│   ├── else.cpp         # if-else statements
│   ├── else_if.cpp      # else-if chains
│   ├── switch.cpp       # Switch-case statements
│   ├── logical.cpp      # Logical operators (&&, ||, !)
│   └── leap_year.cpp    # Leap year calculator
│
├── 04_loops/            # Loop constructs
│   ├── for.cpp          # For loops
│   ├── while.cpp        # While loops
│   ├── do_while.cpp     # Do-while loops
│   ├── foreach.cpp      # Range-based for loops
│   ├── nested.cpp       # Nested loops
│   └── enter_pin.cpp    # PIN validation example
│
├── 05_vectors/          # Arrays and vectors
│   ├── arrays.cpp       # Basic arrays
│   ├── vectors.cpp      # STL vectors
│   ├── arrays_loops.cpp # Iterating through arrays
│   ├── multidimensional_arrays.cpp
│   ├── battleship_example.cpp
│   └── odd_even.cpp     # Array filtering
│
├── 06_functions/        # Functions and scope
│   ├── definition.cpp   # Function definitions
│   ├── declaration.cpp  # Function declarations
│   ├── parameters.cpp   # Function parameters
│   ├── arguments.cpp    # Passing arguments
│   ├── reference.cpp    # Pass by reference
│   ├── overloading.cpp  # Function overloading
│   ├── recursion.cpp    # Recursive functions
│   ├── scope.cpp        # Variable scope
│   └── voids.cpp        # Void functions
│
├── 07_pointers/         # Pointers and memory addresses
│   ├── basic_pointers.cpp    # Introduction to pointers
│   ├── null_pointers.cpp     # Null pointer handling
│   └── pointer_arithmetic.cpp # Pointer arithmetic with arrays
│
├── 08_classes/          # Object-Oriented Programming basics
│   ├── basic_class.cpp  # Class definition and objects
│   ├── constructors.cpp # Constructors and destructors
│   └── encapsulation.cpp # Private members, getters, setters
│
├── 09_inheritance/      # Inheritance and polymorphism
│   ├── basic_inheritance.cpp # Base and derived classes
│   └── polymorphism.cpp      # Virtual functions, overriding
│
├── 10_file_io/          # File input/output operations
│   ├── write_file.cpp   # Writing to files
│   ├── read_file.cpp    # Reading from files
│   └── append_file.cpp  # Appending to files
│
├── 11_templates/        # Generic programming
│   ├── function_templates.cpp # Template functions
│   └── class_templates.cpp    # Template classes
│
├── 12_stl/              # Standard Template Library
│   ├── stl_vector.cpp   # Advanced vector operations
│   ├── stl_map.cpp      # Map for key-value pairs
│   └── stl_set.cpp      # Set for unique elements
│
├── 13_exceptions/       # Exception handling
│   ├── basic_exception.cpp   # Try-catch basics
│   └── multiple_catch.cpp    # Multiple exception types
│
└── _bugs/               # Debugging exercises (FIXED)
    ├── fortune.cpp      # Fixed: == vs = bug
    ├── ratio.cpp        # Fixed: integer division
    ├── millionaire.cpp  # Quiz game
    ├── steps.cpp        # Loop iteration
    └── sum.cpp          # Sum calculator
```

## 🚀 Getting Started

### Prerequisites

You need a C++ compiler installed on your system:

- **Linux/Mac:** g++ (usually pre-installed or via GCC)
- **Windows:** MinGW, MSVC, or WSL with g++

Check if g++ is installed:

```bash
g++ --version
```

### Compilation

#### Compile a single file

```bash
g++ -o output_name filename.cpp
```

Example:

```bash
g++ -o hello 01_hello_world/hello_world.cpp
./hello
```

#### Compile with debugging symbols

```bash
g++ -g -o output_name filename.cpp
```

#### Compile with warnings enabled (recommended)

```bash
g++ -Wall -Wextra -o output_name filename.cpp
```

### Running Programs

After compilation:

```bash
./output_name
```

Or compile and run in one step:

```bash
g++ filename.cpp && ./a.out
```

## 📖 Learning Path

### Beginner Path (Recommended Order)

1. **Start Here:** `01_hello_world/`

   - Learn basic syntax, output, and comments
   - Programs: hello_world.cpp, comments.cpp

2. **Variables:** `02_variables/`

   - Understand data types, input/output, and arithmetic
   - Try: variable.cpp, input.cpp, currency.cpp

3. **Decision Making:** `03_conditions/`

   - Master if/else statements and logical operators
   - Practice: if.cpp, else_if.cpp, leap_year.cpp

4. **Repetition:** `04_loops/`

   - Learn different loop types
   - Start with: for.cpp, while.cpp, nested.cpp

5. **Collections:** `05_vectors/`

   - Work with arrays and vectors
   - Examples: arrays.cpp, vectors.cpp

6. **Functions:** `06_functions/`

   - Organize code with functions
   - Study: definition.cpp, parameters.cpp, recursion.cpp

7. **Debug:** `_bugs/` (FIXED)
   - Understand common bugs (now fixed for reference)
   - Learn: fortune.cpp (comparison vs assignment)
   - Learn: ratio.cpp (integer vs floating-point division)

### Advanced Path

1. **Pointers:** `07_pointers/`

   - Understand memory addresses and pointers
   - Master: basic_pointers.cpp, pointer_arithmetic.cpp

2. **Object-Oriented Programming:** `08_classes/`

   - Learn OOP fundamentals with classes
   - Start with: basic_class.cpp, constructors.cpp, encapsulation.cpp

3. **Inheritance:** `09_inheritance/`

   - Understand class hierarchies and polymorphism
   - Study: basic_inheritance.cpp, polymorphism.cpp

4. **File I/O:** `10_file_io/`

   - Read and write files
   - Practice: write_file.cpp, read_file.cpp

5. **Templates:** `11_templates/`

   - Generic programming for reusable code
   - Learn: function_templates.cpp, class_templates.cpp

6. **STL Containers:** `12_stl/`

   - Master standard library data structures
   - Explore: stl_vector.cpp, stl_map.cpp, stl_set.cpp

7. **Exception Handling:** `13_exceptions/`

   - Handle errors gracefully
   - Study: basic_exception.cpp, multiple_catch.cpp

## 🐛 Bug Fixes Applied

The `_bugs/` directory originally contained intentional bugs for learning. All bugs have been **fixed** in this version:

### Fixed Bugs

1. **fortune.cpp**

   - ❌ Bug: Used `=` (assignment) instead of `==` (comparison)
   - ✅ Fixed: Changed `if (fortune = 0)` to `if (fortune == 0)`

2. **ratio.cpp**

   - ❌ Bug: Integer division returned 0 instead of decimal
   - ✅ Fixed: Added `static_cast<double>()` for proper division

3. **All files**
   - ✅ Added missing `return 0;` statements in main functions

## 💡 Key C++ Concepts Covered

### Fundamentals

- **Basic I/O:** `std::cout`, `std::cin`
- **Data Types:** int, double, char, string, bool
- **Operators:** Arithmetic, comparison, logical, assignment
- **Control Flow:** if/else, switch, ternary operator
- **Loops:** for, while, do-while, range-based for
- **Data Structures:** Arrays, vectors, multi-dimensional arrays
- **Functions:** Declaration, definition, parameters, return values
- **Advanced Functions:** Recursion, function overloading, pass by reference

### Advanced Topics

- **Pointers:** Memory addresses, dereferencing, pointer arithmetic
- **Object-Oriented Programming:** Classes, objects, constructors, destructors
- **Encapsulation:** Private/public members, getters, setters
- **Inheritance:** Base and derived classes, protected members
- **Polymorphism:** Virtual functions, function overriding, runtime polymorphism
- **File I/O:** Reading, writing, and appending to files
- **Templates:** Generic functions and classes, type parameters
- **STL:** Vector algorithms, maps, sets, iterators
- **Exception Handling:** Try-catch blocks, throwing exceptions, error handling
- **Best Practices:** Comments, naming conventions, code organization, memory management

## 🛠️ IDE Setup (VS Code)

A build task is configured for VS Code:

**Task:** `C/C++: g++ build active file`

Use it by pressing `Ctrl+Shift+B` (Linux/Windows) or `Cmd+Shift+B` (Mac)

## 📝 Contributing

This is a learning resource. To contribute:

1. Ensure code follows existing style
2. Add comments explaining new concepts
3. Test all code before committing
4. Update README if adding new sections

## 📚 Additional Resources

- [Codecademy C++ Course](https://www.codecademy.com/learn/learn-c-plus-plus)
- [W3Schools C++ Tutorial](https://www.w3schools.com/cpp/)
- [C++ Reference](https://en.cppreference.com/)
- [LearnCpp.com](https://www.learncpp.com/)

## 📄 License

Educational use - feel free to use these examples for learning C++!

---

Happy Coding! 🚀
