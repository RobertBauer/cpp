#include <iostream> 

void printNumbers() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << std::endl;
    }
}

int main() { 
    std::cout << "Hello, World!" << std::endl; 
    printNumbers();
    return 0; 
}