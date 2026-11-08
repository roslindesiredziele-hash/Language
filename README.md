# Language Evolution Simulator

A C++ project demonstrating core **Object-Oriented Programming (OOP)** principles through the modeling of natural and programming languages. The system uses inheritance, polymorphism, abstraction, and method overriding to simulate how different types of languages evolve over time.

## Features

- Inheritance
- Polymorphism
- Abstraction
- Encapsulation
- Method Overriding
- Virtual Functions
- Unit Testing with Catch2

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

### NaturalLanguage

Represents human languages.

Features:

- Vocabulary management
- Slang management
- Vocabulary growth through evolution

Methods:

```cpp
addWord()
addSlangTerm()
getVocabulary()
getSlangTerms()
getVocabularySize()
```

### English

Derived from `NaturalLanguage`.

Evolution introduces:

```text
Yep
```

### FrenchLanguage

Derived from `NaturalLanguage`.

Evolution introduces:

```text
chelou
```

### ProgrammingLanguage

Represents programming languages.

Features:

- Version tracking
- Feature tracking

Methods:

```cpp
getVersion()
getFeatures()
```

### CppLanguage

Derived from `ProgrammingLanguage`.

Properties:

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

### PythonLanguage

Derived from `ProgrammingLanguage`.

Evolution introduces:

```text
Python 3.12
```

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

Current test results:

```text
All tests passed (61 assertions in 10 test cases)
```

## Requirements

- C++17 compatible compiler
  - g++ 17+
  - Clang 17+
  - MSVC (Visual Studio 2022)
- Catch2 Single Header (`external/catch.hpp`)

## Build and Run

Clone the repository:

```bash
git clone https://github.com/<your-username>/Language.git
cd Language
```

Compile the test suite:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic tests/test_language.cpp -o test_language
```

Run the tests:

```bash
./test_language
```

Expected output:

```text
===============================================================================
All tests passed (61 assertions in 10 test cases)
```

## Project Structure

```text
Language/
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
└── README.md
```

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

## Technologies

- C++17
- Catch2
- GNU g++
- Git
- GitHub

## Author

Desire Roslin Dziele

University of Lodz  
B.Sc. Computer Science