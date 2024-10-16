#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int result1 = add(2, 3);
    double result2 = add(2.0, 3.0);
    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    return 0;
}
