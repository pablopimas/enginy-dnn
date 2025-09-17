#include <iostream>
#include <xtensor.hpp>
#include "enginydnn/functions/activations/sigmoid.hpp"

int main() {
    std::cout << "=== EnginyDNN Demo ===\n";
    std::cout << "Deep Learning Library in C++ with xtensor\n\n";
    
    // Simple demonstration
    std::cout << "Creating a simple tensor and applying sigmoid:\n";
    enginydnn::Tensor input = {-1.0, 0.0, 1.0};
    enginydnn::Tensor output = enginydnn::sigmoid(input);
    
    std::cout << "Input:  " << input << "\n";
    std::cout << "Output: " << output << "\n";
    
    std::cout << "\nFor comprehensive tests, run the test suite!\n";
    std::cout << "=== Demo completed ===\n";
    
    return 0;
}