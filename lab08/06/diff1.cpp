#include <iostream>
#include <type_traits>

int main() {
    int std_steps = 0;
    for (int i = 0; i < 5; i++) {
        if (i == 1) {
            i = 3;
        }
        std_steps++;
    }

    bool forc_is_const = false;
    int forc_steps = 0;
    {
        int __i = 0, __n = 5;
        for (const int &i = __i; i < __n; __i++) {
            forc_is_const = std::is_const_v<std::remove_reference_t<decltype(i)>>;
            forc_steps++;
        }
    }

    std::cout << std_steps << " " << forc_steps << " " << forc_is_const << std::endl;
    return 0;
}
