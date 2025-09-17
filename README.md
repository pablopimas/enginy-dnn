# EnginyDNN

[![Version](https://img.shields.io/badge/version-1.0.0-blue.svg)](https://github.com/pablopimas/enginy-dnn/releases)
[![License](https://img.shields.io/badge/license-GPL--3.0-green.svg)](LICENSE)
[![C++20](https://img.shields.io/badge/C++-20-blue.svg)](https://en.cppreference.com/w/cpp/20)

A Deep Learning Library in C++ with xtensor

## Version 1.0.0

This is the first stable release of EnginyDNN, featuring:
- ✅ Sigmoid activation function with full tensor support
- ✅ Professional project structure and build system
- ✅ Comprehensive test suite
- ✅ Complete documentation

## Project Structure

```
EnginyDNN/
├── include/enginydnn/           # Library headers
│   ├── types.hpp               # Basic type definitions
│   └── functions/
│       └── activations/
│           └── sigmoid.hpp     # Sigmoid activation function
├── tests/                      # Test files
│   └── test_sigmoid.cpp       # Sigmoid function tests
├── main.cpp                   # Demo application
└── CMakeLists.txt            # Build configuration
```

## Building

This project uses CMake and requires xtensor:

```bash
# Install dependencies (macOS with Homebrew)
brew install xtensor xtl

# Build the project
mkdir -p build
cd build
cmake ..
make
```

## Running

### Demo Application
```bash
./build/EnginyDNN
```

### Tests
```bash
./build/test_sigmoid
```

## Features

- [x] Sigmoid activation function
- [x] Support for scalars, arrays, and multi-dimensional tensors
- [x] Comprehensive test suite

## Dependencies

- C++20
- xtensor
- xtl (xtensor dependency)
