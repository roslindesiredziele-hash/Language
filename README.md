# Language Evolution Simulator

A C++ project demonstrating core **Object-Oriented Programming (OOP)** principles through the modeling of natural and programming languages. The system uses inheritance, polymorphism, abstraction, and method overriding to simulate how different types of languages evolve over time.

---

## Features

- Inheritance
- Polymorphism
- Abstraction
- Encapsulation
- Method Overriding
- Virtual Functions
- Unit Testing with Catch2
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

Coverage includes:

- Language evolution
- Inheritance
- Runtime polymorphism
- Version tracking
- Feature tracking
- Vocabulary management
- Slang management
- Derived-class behavior

Current results:

```text
All tests passed
61 assertions
10 test cases
```

---

## Continuous Integration

The project uses **GitHub Actions** for automated continuous integration.

Every push and pull request automatically:

1. Configures the project with CMake
2. Builds the test suite
3. Runs all Catch2 tests through CTest

Current CI status:

```text
Build: Passing
Tests: Passing
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
===============================================================================
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

Potential future extensions:

- More natural language types
- More programming language types
- Additional language evolution rules
- UML diagrams
- Demonstration application

---

## Author

Desire Roslin Dziele

Computer Science Student  
University of Łódź