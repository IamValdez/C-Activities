#include <iostream>

using namespace std;

int main() {
    int iterations;

    cout << "Enter the number of iterations: ";
    cin >> iterations;

    for (int i = 0; i < iterations; ++i) {
        int number;

        cout << "Iteration " << i + 1 << ": Enter a number: ";
        cin >> number;

        if (number % 2 == 0) {
            cout << number << " is an even number.\n";
        } else {
            cout << number << " is an odd number.\n";
        }
    }

    return 0;
}
