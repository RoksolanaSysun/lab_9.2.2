#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_var(const std::vector<int>& numbers) {
    int result = numbers[0];
    for (int num : numbers) {
        result = gcd(result, num);
        if (result == 1) break;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Count: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "At least two numbers are required to calculate the GCD." << std::endl;
        return 1;
    }

    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int result = gcd_var(numbers);
    std::cout << "GCD: " << result << std::endl;

    return 0;
}