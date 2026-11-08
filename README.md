# Language Evolution Simulator

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Class Hierarchy](#class-hierarchy)
- [Implemented Classes](#implemented-classes)
- [Example](#example)
- [Design Notes](#design-notes)
- [Testing](#testing)
- [Continuous Integration](#continuous-integration)
- [Requirements](#requirements)
- [Build and Run](#build-and-run)
- [Project Structure](#project-structure)
- [OOP Principles Demonstrated](#oop-principles-demonstrated)
- [Technologies](#technologies)
- [Future Improvements](#future-improvements)
- [Author](#author)

---

## Project Overview

Language Evolution Simulator is a C++ project designed to demonstrate core Object-Oriented Programming principles through the modelling of natural and programming languages.

The project implements an inheritance hierarchy rooted in an abstract `Language` base class and explores concepts such as abstraction, inheritance, polymorphism, virtual dispatch, method overriding, and encapsulation.

Beyond OOP concepts, the repository demonstrates modern software engineering practices through:

- Automated testing with Catch2
- Build automation with CMake
- Test orchestration with CTest
- Continuous Integration with GitHub Actions

The goal is to provide a practical example of how object-oriented design can be used to model related concepts while remaining maintainable, extensible, and testable.

---

## Features

- Inheritance
- Polymorphism
- Abstraction
- Encapsulation
- Method Overriding
- Virtual Functions
- Automated Testing with Catch2
- CMake Build System
- CTest Integration
- GitHub Actions Continuous Integration

---

## Class Hierarchy

```text
Language
│
├── NaturalLanguage
│   ├── English
│   └── FrenchLanguage
│
└── ProgrammingLanguage
    ├── CppLanguage
    └── PythonLanguage
```

---

## Implemented Classes

### Language

Abstract base class representing a generic language.

```cpp
class Language
{
public:
    virtual void evolve() = 0;
    virtual ~Language() = default;
};
```

---

### NaturalLanguage

Represents human languages.

#### Features

- Vocabulary management
- Slang management
- Vocabulary growth through evolution

#### Methods

```cpp
addWord()
addSlangTerm()
getVocabulary()
getSlangTerms()
getVocabularySize()
```

---

### English

Derived from `NaturalLanguage`.

Evolution introduces:

```text
Yep
```

---

### FrenchLanguage

Derived from `NaturalLanguage`.

Evolution introduces:

```text
chelou
```

---

### ProgrammingLanguage

Represents programming languages.

#### Features

- Version tracking
- Feature tracking

#### Methods

```cpp
getVersion()
getFeatures()
```

---

### CppLanguage

Derived from `ProgrammingLanguage`.

#### Properties

| Property | Value |
|-----------|---------|
| Name | C++ |
| File Extension | `.cpp` |
| Compiler | `g++` |
| Compiled | Yes |
| Interpreted | No |
| Comment Syntax | `//` |
| Multi-Line Comments | `/* */` |
| Namespace Keyword | `namespace` |

Evolution introduces:

```text
C++23 modules
```

---

### PythonLanguage

Derived from `ProgrammingLanguage`.

Evolution introduces:

```text
Python 3.12
```

---

## Example

```cpp
CppLanguage cpp;

cpp.evolve();

std::cout << cpp.getVersion() << '\n';
std::cout << cpp.getFeatures()[0] << '\n';
```

Output:

```text
2
C++23 modules
```

---

## Design Notes

### Evolution Model

Natural and programming languages evolve differently:

- Natural languages gain vocabulary and slang terms.
- Programming languages gain versions and language features.

### Runtime Polymorphism

Objects can be manipulated through `Language*` pointers while executing the correct derived implementation of `evolve()`.

### Object-Oriented Design

The project uses inheritance to share common behavior while allowing each derived language type to implement its own evolution strategy through method overriding.

---

## Testing

The project uses **Catch2** for automated unit testing.

### Coverage

✅ Language evolution  
✅ Inheritance  
✅ Runtime polymorphism  
✅ Version tracking  
✅ Feature tracking  
✅ Vocabulary management  
✅ Slang management  
✅ Derived-class behavior  
✅ Base-class pointer interaction  
✅ Multiple evolution scenarios  

### Current Results

pull request automatically:

1. Configures the project using CMake
2. Builds the test executable
3. Executes the Catch2 test suite through CTest

Current CI Status:

```text
Build: Passing
Tests: Passing
10 test cases
61 assertions
100% passing
```

---

## Requirements

- C++17 compatible compiler
- CMake 3.10+
- Catch2 Single Header (`external/catch.hpp`)

Supported compilers:

- GNU g++
- Clang
- Microsoft Visual Studio (MSVC)

---

## Build and Run

### Clone the Repository

```bash
git clone https://github.com/<your-username>/Language.git
cd Language
```

### Configure

```bash
mkdir build
cd build

cmake ..
```

### Build

```bash
cmake --build .
```

### Run Tests

Linux/macOS:

```bash
ctest --verbose
```

Visual Studio:

```bash
ctest -C Debug --verbose
```

Expected output:

```text
All tests passed (61 assertions in 10 test cases)
```

---

## Project Structure

```text
Language/
│
├── .github/
│   └── workflows/
│       └── ci.yml
│
├── external/
│   └── catch.hpp
│
├── src/
│   ├── Language.hpp
│   ├── NaturalLanguage.hpp
│   ├── ProgrammingLanguage.hpp
│   ├── EnglishLanguage.hpp
│   ├── FrenchLanguage.hpp
│   ├── CppLanguage.hpp
│   └── PythonLanguage.hpp
│
├── tests/
│   └── test_language.cpp
│
├── CMakeLists.txt
│
└── README.md
```

---

## OOP Principles Demonstrated

### Abstraction

`Language` defines a common interface for all language types.

### Inheritance

Specialized language classes extend common functionality from parent classes.

### Polymorphism

Objects can be manipulated through `Language*` pointers while executing the correct overridden behavior.

### Encapsulation

Language state is maintained internally and accessed through public member functions.

### Method Overriding

Derived classes customize their evolution behavior while reusing functionality from parent classes.

---

## Technologies

- C++17
- Catch2
- CMake
- CTest
- GitHub Actions
- Git
- GitHub
- GNU g++

---

## Future Improvements

Potential future extensions include:

- Additional natural language types
- Additional programming language types
- More sophisticated evolution rules
- UML diagrams
- Interactive demonstration application

---

## Author

**Desire Roslin Dziele**  
Computer Science Student  
University of Łódź