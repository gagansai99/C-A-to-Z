#include <bits/stdc++.h>
using namespace std;

// Function to calculate power manually
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int temp = num;
    int lenStr = to_string(num).size();
    int sum = 0;

    while (temp > 0) {
        int rem = temp % 10;
        sum += power(rem, lenStr); // Using integer-based power calculation
        temp /= 10;
    }

    if (sum == num) {
        cout << "The number is an Armstrong number.";
    } else {
        cout << "The number is not an Armstrong number.";
    }

    return 0;
}
