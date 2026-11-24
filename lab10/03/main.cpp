#include <iostream>

int main() {
    int a = 12;
    int b = 5;

    int mult = a * b;
    int *ptr = &a;
    int deref = *ptr;

    int bitwise_and = a & b;
    int *addr = &b;
    int &ref = a;

    std::cout << mult << " " << deref << " " << bitwise_and << " " << ref << std::endl;
    return 0;
}
