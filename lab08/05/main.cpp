#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int &x : a) {
        std::cin >> x;
    }

    int last = a.back();
    for (int &x : a) {
        x += last;
    }

    int positive_count = 0;
    int negative_count = 0;

    for (int x : a) {
        if (x > 0) {
            positive_count++;
        } else if (x < 0) {
            negative_count++;
        }
    }

    std::cout << positive_count << " " << negative_count << std::endl;

    return 0;
}
