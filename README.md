# OOPS Elective – C++ Programs

This repository contains the C++ programs developed as part of my **Object-Oriented Programming (OOPS) Elective** coursework.

The programs progress from basic C++ programming concepts to classes, constructors, inheritance, polymorphism, operator overloading, and exception handling. Each `Class_X` folder contains programs covered or practised during the corresponding class/session.

---

## 👩‍🎓 Student Details

| Field | Details |
|:---|:---|
| **Name** | Shivani Ishwar Metri |
| **Branch** | Electronics and Communication Engineering |
| **Semester** | VII |
| **Division** | F |
| **USN** | 01FE23BEC337 |
| **ROLLNO**| 638 |

---

## 📁 Repository Structure

```text
OPPS_Codes/
│
├── Programs/
│   ├── Class_1/
│   ├── Class_2/
│   ├── Class_3/
│   ├── Class_4/
│   ├── Class_5/
│   ├── Class_6/
│   ├── Class_7/
│   ├── Class_8/
│   ├── Class_9/
│   ├── Class_10/
│   ├── Class_11/
│   └── Class_12/
│
├── Screenshots of errors/
├── .gitignore
└── README.md
```

Each class folder contains the source files for the programs associated with that class. Some files preserve intermediate attempts or examples with errors for learning and comparison.

---

## 📚 Class-wise Programs

### 🔹 Class 1 – C++ Fundamentals

Programs covering basic C++ syntax, input/output, data types, strings, and parameter passing.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Basic output using `cout` |
| `prog_2.cpp` | User input and addition of two numbers |
| `prog_3.cpp` | Basic data types and variable declaration |
| `prog_4.cpp` | Area of a rectangle using user input |
| `prog_5.cpp` | Finding the largest number in a list |
| `prog_6.cpp` | Finding string length using C-style and C++-style approaches |
| `prog_7.cpp` | C-style string palindrome checking |
| `prog_8.cpp` | C++-style palindrome program – incomplete practice program |
| `prog_9.cpp` | Parameter passing – pass by value |
| `prog_10.cpp` | Parameter passing – pass by reference |
| `prog_11.cpp` | Parameter passing – pass by pointer |

---

### 🔹 Class 2 – Classes and Objects

Introduction to classes, objects, member functions, and defining functions outside a class.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Creating a class and object; accessing private data through member functions |
| `prog_2.cpp` | Student class with data members and member functions |
| `prog_3.cpp` | Defining a class member function outside the class |
| `prog_4.cpp` | Rectangle class with member functions for setting values and calculating area |
| `prog_5.cpp` | Rectangle program with a function returning the calculated area |

---

### 🔹 Class 3 – Member Functions and Constructors

Programs covering class-based data handling, object interaction, and constructors.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Time class and addition of two time objects |
| `prog_2.cpp` | Addition of two complex numbers using objects |
| `prog_3.cpp` | Default constructor for initializing employee data |
| `prog_4.cpp` | Default and parameterized constructors |
| `prog_5.cpp` | Parameterized constructor using a Distance class |
| `prog_6.cpp` | Default, parameterized, and copy constructors |

---

### 🔹 Class 4 – Destructors and Static Data Members

Programs demonstrating object destruction and static members shared among objects.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Destructor with a class having default, parameterized, and copy constructors |
| `prog_2.cpp` | Static data member shared by multiple objects |
| `prog_3.cpp` | Static counter with a separate employee ID for each object |

> **Note:** Compare `prog_2.cpp` and `prog_3.cpp` to understand how static data members are shared by objects of a class.

---

### 🔹 Class 5 – Static Member Functions and Friend Functions

Programs covering static member functions and access to private class members through friend functions.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Static member function and static data member |
| `prog_2.cpp` | Friend function accessing private members of a class |
| `prog_3.cpp` | Practice program for friend function parameters |
| `prog_4.cpp` | Common friend function accessing private data from two classes |

---

### 🔹 Class 6 – Inheritance

Introduction to inheritance and multi-level inheritance.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Single-level inheritance using Animal and Dog |
| `prog_2.cpp` | Multi-level inheritance using Person, Student, and IT_Student |
| `prog_3.cpp` | Multi-level inheritance and experimentation with access modes |

---

### 🔹 Class 7 – Multi-level Inheritance and Access Control

Further practice with multi-level inheritance and the `protected` access specifier.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Multi-level inheritance using Vehicle, Car, and Sports Car |
| `prog_2.cpp` | Multi-level inheritance using protected members |
| `prog_3.cpp` | Reserved for further practice |

---

### 🔹 Class 8 – Constructor Initializer Lists and Multiple Inheritance

Programs practising constructor initializer lists and building on inheritance examples. This folder also contains intermediate/error examples that are useful for comparison with later versions.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Single-level inheritance using constructor initializer lists to initialize base-class and derived-class members |
| `prog_2.cpp` | Multi-level inheritance with Person, Student, and IT_Student; constructor-initializer-list practice (incomplete/error in current version) |
| `prog_3.cpp` | Multiple inheritance using Student, Test, and Result; demonstrates the default-constructor issue when objects are created without arguments |
| `prog_4.cpp` | Student, Test, and Result example using parameterized constructors and an initializer list |
| `prog_5.cpp` | Student result system using multiple inheritance; inputs three subject marks and calculates total and percentage |
| `prog_6.cpp` | Student result system using multiple inheritance; inputs five subject marks and displays total and percentage |

---

### 🔹 Class 9 – Multiple Inheritance

Programs demonstrating a class inheriting from more than one base class, including a student-result example.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Multiple inheritance using Liquid, Fuel, and derived class Petrol |
| `prog_2.cpp` | Student, Test, and Result multiple-inheritance example; an intermediate constructor/display practice version |

> **Note:** The supplied Class 9 folder contains `prog_1.cpp` and `prog_2.cpp`. Class 8 also contains related versions of the student-result example.

---

### 🔹 Class 10 – Virtual Base Classes and Function Overriding

Programs covering the diamond inheritance problem, virtual base classes, and runtime polymorphism through virtual functions.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Diamond-style multiple inheritance where member `i` becomes ambiguous because D inherits A through both B and C |
| `prog_2.cpp` | Resolving the repeated-base ambiguity using a virtual base class |
| `prog_3.cpp` | Function overriding with a virtual `show()` function and base-class pointer; demonstrates runtime polymorphism/late binding |
| `prog_4.cpp` | Further practice with base and derived `show()` functions, virtual dispatch, and direct object calls |

---

### 🔹 Class 11 – Runtime Polymorphism, Abstract Classes, and Operator Overloading

Programs demonstrating virtual functions, abstract classes, and unary/binary operator overloading.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Shape base class and Circle derived class; virtual `draw()` demonstrates runtime polymorphism |
| `prog_2.cpp` | One base class with three derived classes (Circle, Square, and Triangle) overriding `draw()` |
| `prog_3.cpp` | Runtime polymorphism using an array of base-class pointers to different derived shape objects |
| `prog_4.cpp` | Abstract Vehicle class with a pure virtual function and derived Car and Bike classes |
| `prog_5.cpp` | Binary `+` operator overloading to add two complex numbers |
| `prog_6.cpp` | Binary `-` operator overloading to subtract two complex numbers |
| `prog_7.cpp` | Prefix and postfix increment operator overloading (`++`) for a Counter class |
| `prog_8.cpp` | Prefix/postfix-style decrement logic practice; review the operator names in the current source, which still use `operator++` |

---

### 🔹 Class 12 – String Operator Overloading and Exception Handling

Programs introducing operator overloading for strings and exception handling using `try`, `throw`, and `catch`.

| **Program** | **Concept** |
|:---|:---|
| `prog_1.cpp` | Practice with binary `+` operator overloading for string concatenation; current source contains issues to correct |
| `prog_2.cpp` | Basic exception handling using `try`, `throw`, and `catch` for a negative integer |
| `prog_3.cpp` | Throwing and catching an integer when one of two values is zero |
| `prog_4.cpp` | Exception handling with different thrown data types (`int` and `double`) and matching catch blocks |
| `prog_5.cpp` | Handling division by zero by throwing and catching a message |
| `prog_6.cpp` | Modified division-by-zero example exploring the order of division and exception throwing |

---

## 🧠 Concepts Covered

The repository includes the following C++ and OOPS concepts:

**1. C++ Fundamentals**
- Basic C++ syntax, variables, data types, and input/output using `cin` and `cout`.
- Functions and parameter passing:
  - Pass by value
  - Pass by reference
  - Pass by pointer
- C-style and C++-style strings.

**2. Classes and Objects**
- Classes, objects, data members, and member functions.
- Member functions defined outside the class.

**3. Constructors and Destructors**
- Default constructor.
- Parameterized constructor.
- Copy constructor.
- Constructor initializer lists.
- Destructors.

**4. Static and Friend Functions**
- Static data members.
- Static member functions.
- Friend functions, including functions that access members of multiple classes.

**5. Inheritance**
- Single-level inheritance.
- Multi-level inheritance.
- Multiple inheritance.
- Virtual base classes and the diamond problem.
- Access specifiers: `private`, `public`, and `protected`.

**6. Polymorphism**
- Function overriding.
- Virtual functions.
- Late binding.
- Runtime polymorphism.
- Abstract classes and pure virtual functions.

**7. Operator Overloading**
- Binary `+` and `-` operators.
- Prefix and postfix increment/decrement practice.

**8. Exception Handling**
- `try`
- `throw`
- `catch`
- Handling different exception types.
- Division-by-zero examples.

---

## 💻 Programming Language

- **C++**

The programs use standard C++ features and headers such as:

```cpp
#include <iostream>
#include <cstring>
```

Some programs also use `string` and other standard-library features.

---

## 🛠️ Tools Used

| Tool | Purpose |
|:---|:---|
| **C++** | Programming language |
| **GCC / G++** | Compiler |
| **Code::Blocks** | C++ development environment |
| **Visual Studio Code** | Code editing and execution |
| **Git** | Version control |
| **GitHub** | Repository hosting |

---

## ▶️ How to Run

### Option 1: Run Using Code::Blocks

The programs can be compiled and executed using Code::Blocks with a configured C++ compiler.

1. Open Code::Blocks.
2. Go to **File → Open** and select the required `.cpp` file.
3. If Code::Blocks asks for a compiler, select/configure the installed GCC / MinGW compiler.
4. Click **Build and Run** or press `F9`.
5. The program output will appear in the console window.

For example, open `Programs/Class_1/prog_1.cpp` and choose **Build → Build and Run**.

> **Note:** Most programs are standalone `.cpp` files and can be opened and run individually. Some files are intentionally kept as intermediate examples and may require correction before they compile successfully.

### Option 2: Run Using Visual Studio Code

Open the repository folder in Visual Studio Code and compile a program using G++.

**Compile:**

```bash
g++ Programs/Class_1/prog_1.cpp -o program
```

**Run on Windows:**

```bash
program.exe
```

Or, depending on the terminal:

```bash
./program
```

Replace the source-file path with the `.cpp` file you want to execute.

### Option 3: Clone the Repository

Use the following command to clone the repository:

```bash
git clone https://github.com/638shivani/OPPS_Codes.git
```

Then open the cloned folder in Code::Blocks, Visual Studio Code, or another C++ IDE.

---

## 📸 Screenshots / Errors

The **Screenshots of errors** folder may contain screenshots related to errors encountered while developing and testing the programs. These are included as part of the learning and debugging process.

---

## 📌 Notes

- Some programs are preserved in their original coursework/practice form, including intermediate attempts and examples with errors.
- The README describes the intent of each program based on the source files; it does not imply that every program compiles without modification.
- Review the comments in each `.cpp` file for additional context.
- The repository is intended for coursework, learning, practice, and revision of C++ OOPS concepts.

---

## 👩‍💻 Author

**Shivani Ishwar Metri**

Electronics and Communication Engineering (ECE)

---

⭐ If this repository is useful for learning C++ OOPS concepts, feel free to star the repository!


