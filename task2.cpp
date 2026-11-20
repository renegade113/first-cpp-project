#include <iostream>

using namespace std;

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int divisor = 2; divisor <= number / divisor; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    cout << "1. Enter an integer to check for primality: ";
    if (!(cin >> number)) {
        return 1;
    }

    if (isPrime(number)) {
        cout << "Prime\n";
    } else {
        cout << "Not prime\n";
    }

    long long natural;
    cout << "\n2. Enter a non-negative integer: ";
    if (!(cin >> natural) || natural < 0) {
        return 1;
    }

    // Find the place value of the first digit.
    long long place = 1;
    while (natural / place >= 10) {
        place *= 10;
    }

    int digitSum = 0;
    int minDigit = 9;
    int maxDigit = 0;
    cout << "Digits:";

    while (place > 0) {
        int digit = static_cast<int>(natural / place % 10);
        cout << ' ' << digit;
        digitSum += digit;

        if (digit < minDigit) {
            minDigit = digit;
        }
        if (digit > maxDigit) {
            maxDigit = digit;
        }

        place /= 10;
    }

    cout << "\nSum: " << digitSum << "\nMin digit: " << minDigit
         << "\nMax digit: " << maxDigit << '\n';

    int count;
    cout << "\n3. Enter the sequence length and then its integers: ";
    if (!(cin >> count) || count < 1) {
        return 1;
    }

    long long minValue;
    if (!(cin >> minValue)) {
        return 1;
    }
    long long maxValue = minValue;

    for (int i = 1; i < count; ++i) {
        long long value;
        if (!(cin >> value)) {
            return 1;
        }

        if (value < minValue) {
            minValue = value;
        }
        if (value > maxValue) {
            maxValue = value;
        }
    }

    cout << "Min value: " << minValue << "\nMax value: " << maxValue << '\n';
}
