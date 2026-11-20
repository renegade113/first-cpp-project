#include <iostream>

using namespace std;

long long digitProduct(int number) {
    long long product = 1;
    while (number > 0) {
        product *= number % 10;
        number /= 10;
    }
    return product;
}

bool startsAndEndsWithOne(int number) {
    int lastDigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    return number == 1 && lastDigit == 1;
}

int main() {
    int numbers[20000];
    int count;

    cout << "Enter the sequence length and then its natural numbers:\n";
    if (!(cin >> count) || count < 0 || count > 10000) {
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        if (!(cin >> numbers[i]) || numbers[i] < 1) {
            return 1;
        }
    }

    // Move the numbers we want to keep to the start of the same array.
    int kept = 0;
    for (int i = 0; i < count; ++i) {
        if (digitProduct(numbers[i]) != 180) {
            numbers[kept] = numbers[i];
            ++kept;
        }
    }

    int newCount = kept;
    for (int i = 0; i < kept; ++i) {
        if (startsAndEndsWithOne(numbers[i])) {
            ++newCount;
        }
    }

    // Fill from right to left to keep the unread numbers intact.
    int position = newCount - 1;
    for (int i = kept - 1; i >= 0; --i) {
        int number = numbers[i];
        numbers[position] = number;
        --position;

        if (startsAndEndsWithOne(number)) {
            numbers[position] = number;
            --position;
        }
    }

    cout << "Result:\n";
    for (int i = 0; i < newCount; ++i) {
        if (i > 0) {
            cout << ' ';
        }
        cout << numbers[i];
    }
    cout << '\n';
}
