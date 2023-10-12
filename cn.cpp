#include <bits/stdc++.h>
#include <vector>
using namespace std;

void findNumberOfPiajus(int caseNum, unsigned long long P, unsigned long long L) {
    std::cout << "Case " << caseNum << ":";
    std::vector<unsigned long long> possibleIntegers;

    unsigned long long remainingPiajus = P - L;

    // Check for impossible cases
    if (remainingPiajus == 0 || L >= P) {
        std::cout << " impossible" << std::endl;
        return;
    }

    // Check for possible cases
    for (unsigned long long i = 1; i * i <= remainingPiajus; i++) {
        if (remainingPiajus % i == 0) {
            unsigned long long num1 = i;
            unsigned long long num2 = remainingPiajus / i;

            if (num1 > L) {
                possibleIntegers.push_back(num1);
            }

            if (num2 != num1 && num2 > L) {
                possibleIntegers.push_back(num2);
            }
        }
    }

    // Print the possible integers in ascending order
    std::sort(possibleIntegers.begin(), possibleIntegers.end());
    for (unsigned long long num : possibleIntegers) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 1; i <= T; i++) {
        unsigned long long P, L;
        std::cin >> P >> L;

        findNumberOfPiajus(i, P, L);
    }

    return 0;
}
