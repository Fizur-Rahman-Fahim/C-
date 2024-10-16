#include <iostream>
class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}
    // Overload the unary '-' operator
    MyNumber operator-() {
        return MyNumber(-value);
    }
    int getValue() {
        return value;
    }
};
int main() {
    MyNumber num1(5);
    MyNumber num2 = -num1;  // Using the overloaded '-' operator

    std::cout << "Original value: " << num1.getValue() << std::endl;
    std::cout << "Negated value: " << num2.getValue() << std::endl;

    return 0;
}