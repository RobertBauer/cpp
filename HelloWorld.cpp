#include <iostream> 
#include <chrono>
#include <ctime>
#include <iomanip>

void printSystemDate() {
    auto now = std::chrono::system_clock::now();
    auto time_t = std::chrono::system_clock::to_time_t(now);
    std::tm* local_time = std::localtime(&time_t);
    
    std::cout << "Current date: " 
              << std::put_time(local_time, "%Y-%m-%d") 
              << std::endl;
}

void printNumbers() {
    for (int i = 1; i <= 10; i++) {
        std::cout << i << std::endl;
    }
}

int main() { 
    std::cout << "Hello, World!" << std::endl; 
    printNumbers();
    printSystemDate();
    return 0; 
}