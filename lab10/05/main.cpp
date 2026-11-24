#include <iostream>

int main() {
    {
        int x = 1, y = 2;
        int *p = &y, *q = &x;
        if (p < q)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    {
        int y = 2, x = 1;
        int *p = &y, *q = &x;
        if (p < q)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    return 0;
}
