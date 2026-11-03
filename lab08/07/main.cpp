#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int x;
    while (std::cin >> x) {
        numbers.push_back(x);
    }

    bool has_negative = false;
    for (int n : numbers) {
        if (n < 0) {
            std::cout << n << std::endl;
            has_negative = true;
            break;
        }
    }

    if (!has_negative) {
        std::cout << "all non-negative" << std::endl;
    }

    return 0;
}
