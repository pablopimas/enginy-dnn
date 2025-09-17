#include <iostream>
#include <xtensor.hpp>
#include "enginydnn/functions/activations/sigmoid.hpp"

void test_sigmoid() {
    std::cout << "=== Sigmoid Function Test ===\n";
    
    // Test 1: Single values
    std::cout << "\nTest 1: Single values\n";
    enginydnn::Tensor x1 = {0.0};
    enginydnn::Tensor result1 = enginydnn::sigmoid(x1);
    std::cout << "sigmoid(0.0) = " << result1 << " (expected: ~0.5)\n";
    
    enginydnn::Tensor x2 = {1.0};
    enginydnn::Tensor result2 = enginydnn::sigmoid(x2);
    std::cout << "sigmoid(1.0) = " << result2 << " (expected: ~0.731)\n";
    
    enginydnn::Tensor x3 = {-1.0};
    enginydnn::Tensor result3 = enginydnn::sigmoid(x3);
    std::cout << "sigmoid(-1.0) = " << result3 << " (expected: ~0.269)\n";
    
    // Test 2: Array of values
    std::cout << "\nTest 2: Array of values\n";
    enginydnn::Tensor x_array = {-2.0, -1.0, 0.0, 1.0, 2.0};
    enginydnn::Tensor result_array = enginydnn::sigmoid(x_array);
    std::cout << "sigmoid([-2, -1, 0, 1, 2]) = " << result_array << "\n";
    
    // Test 3: 2D array
    std::cout << "\nTest 3: 2D array\n";
    enginydnn::Tensor x_2d = {{-1.0, 0.0}, {1.0, 2.0}};
    enginydnn::Tensor result_2d = enginydnn::sigmoid(x_2d);
    std::cout << "sigmoid([[-1, 0], [1, 2]]) = \n" << result_2d << "\n";
    
    std::cout << "\n=== Sigmoid tests completed ===\n";
}

int main() {
    test_sigmoid();
    return 0;
}
