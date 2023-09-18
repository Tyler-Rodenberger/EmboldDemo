#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;
    return 0;
}


/* This is a critical issue */
int divideByZero(int n) {
    int total = 100;
    for (int i = -10; i < 10; i += 1) {
        total /= i;
    }
    return total;
}


