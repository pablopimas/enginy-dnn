# EnginyDNN

A Deep Learning Library in C++ with xtensor

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
