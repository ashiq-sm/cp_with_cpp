#include <iostream>

int sum_of_digits(int num) {
    int total = 0;
    while (num > 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}

int efficient_sum(int n) {
    int total_sum = 0;
    for (int i = 1; i <= n; ++i) {
        total_sum += sum_of_digits(i);
    }
    return total_sum;
}

int main() {
    int t, n;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        std::cin >> n;
        std::cout << efficient_sum(n) << std::endl;
    }
    return 0;
}