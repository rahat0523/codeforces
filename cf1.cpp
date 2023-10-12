#include <iostream>
#include <vector>

using namespace std;

// Function to count the number of operations Alphen will perform
long long int alphenOperations(vector<long long int>& arr) {
    long long int n = arr.size();
    long long int operations = 0;

    while (true) {
        bool sorted = true;

        // Check if the array is sorted
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted)
            break;

        // Perform the operation on each element of the array
        for (int i = 0; i < n; i++) {
            arr[i] = max(0, arr[i] - 1);
        }

        operations++;
    }

    return operations;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        long long int n; // Length of the array
        cin >> n;

        vector<long long int> arr(n); // Array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Calculate the number of operations for the current test case
        long long int result = alphenOperations(arr);

        // Print the result for the current test case
        cout << result << endl;
    }

    return 0;
}
