#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}


/* This is a critical issue */
int divideByZero(int n) {
    int total = 100;
    int zero = 0;
    return total / 0;
}


