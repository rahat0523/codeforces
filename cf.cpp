#include <iostream>
#include <vector>
#include <algorithm>

bool solveTestCase() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Sort the array in non-decreasing order
    std::sort(a.begin(), a.end());

    // Try to find a non-divisor for each element in the array
    int nonDivisor = -1;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) {
            nonDivisor = a[i];
            break;
        }
    }

    if (nonDivisor == -1) {
        // If all elements are the same, no solution exists
        return false;
    }

    std::vector<int> b, c;
    b.push_back(a[0]);

    for (int i = 1; i < n; ++i) {
        if (a[i] % nonDivisor == 0) {
            c.push_back(a[i]);
        } else {
            b.push_back(a[i]);
        }
    }

    // Output the result
    std::cout << b.size() << " " << c.size() << "\n";
    for (int num : b) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    for (int num : c) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return true;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        if (!solveTestCase()) {
            std::cout << "-1\n";
        }
    }

    return 0;
}
