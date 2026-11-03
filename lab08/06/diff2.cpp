#include <iostream>

int get_limit(int &calls) {
    calls++;
    return 3;
}

int main() {
    int calls_std = 0;
    for (int i = 0; i < get_limit(calls_std); i++) {
    }

    int calls_forc = 0;
    {
        int __i = 0, __n = get_limit(calls_forc);
        for (const int &i = __i; i < __n; __i++) {
        }
    }

    std::cout << calls_std << " " << calls_forc << std::endl;
    return 0;
}
