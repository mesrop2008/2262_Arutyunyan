#include <iostream>

int main() {
    std::cout << reinterpret_cast<double*>(3000) - reinterpret_cast<double*>(2000) << std::endl;
    return 0;
}
