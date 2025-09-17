# Changelog

All notable changes to EnginyDNN will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [1.0.0] - 2025-09-17

### Added
- **Sigmoid activation function** - Element-wise sigmoid activation with xtensor support
  - Works with scalars, 1D arrays, and multi-dimensional tensors
  - Optimized implementation using xtensor mathematical operations
  - Located in `include/enginydnn/functions/activations/sigmoid.hpp`
- **Core tensor types** - Basic tensor type definitions using xtensor
  - `Tensor` type alias for `xt::xarray<double>`
  - Located in `include/enginydnn/types.hpp`
- **Comprehensive test suite** - Dedicated testing framework
  - `tests/test_sigmoid.cpp` with multiple test cases
  - Tests for single values, arrays, and 2D tensors
  - Expected value validation
- **Project structure** - Professional C++ library organization
  - CMake build system with separate demo and test executables
  - Proper include directory structure
  - Clean separation between library code and tests
- **Demo application** - Simple demonstration of library capabilities
  - `main.cpp` shows basic usage of sigmoid function
  - Clean, educational example for new users
- **Documentation** - Complete project documentation
  - `README.md` with build instructions and usage examples
  - Project structure documentation
  - Dependencies and requirements clearly listed

### Infrastructure
- **CMake build system** - Modern CMake configuration
  - Separate targets for demo (`EnginyDNN`) and tests (`test_sigmoid`)
  - Proper xtensor integration and linking
  - C++20 standard requirement
- **Git repository setup** - Professional version control
  - Comprehensive `.gitignore` for build artifacts
  - Clean commit history and branch management
  - Ready for collaborative development

### Dependencies
- **xtensor** - High-performance tensor operations
- **xtl** - Required by xtensor
- **C++20** - Modern C++ standard
- **CMake 3.15+** - Build system requirement

---

## Future Releases

Planned features for upcoming versions:
- Additional activation functions (ReLU, Tanh, Leaky ReLU)
- Neural network layer implementations
- Forward and backward propagation
- Optimization algorithms
- More comprehensive test coverage
