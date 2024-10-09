#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int x[n];

    // Input elements using a for loop
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> x[i];
    }

    int sum_of_repeated = 0;

    // Check for repeated numbers and add them together
    for (int i = 0; i < n; ++i) {
        int count = 1; // Count the current occurrence

        // Check for repeated occurrences
        for (int j = i + 1; j < n; ++j) {
            if (x[i] == x[j]) {
                count++;
            }
        }

        // Add the number multiplied by its occurrence to the sum
        sum_of_repeated += (count > 1) ? (x[i] * count) : 0;
    }

    cout << "Sum of repeated numbers (considering repetitions): " << sum_of_repeated << endl;

    return 0;
}
