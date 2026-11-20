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
    int numbers[10000];
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

    bool hasPrime = false;
    for (int i = 0; i < count; ++i) {
        if (isPrime(numbers[i])) {
            hasPrime = true;
            break;
        }
    }

    if (hasPrime) {
        for (int i = 1; i < count; ++i) {
            int current = numbers[i];
            int position = i;

            while (position > 0 && numbers[position - 1] > current) {
                numbers[position] = numbers[position - 1];
                --position;
            }

            numbers[position] = current;
        }
    }

    cout << "Result:\n";
    for (int i = 0; i < count; ++i) {
        if (i > 0) {
            cout << ' ';
        }
        cout << numbers[i];
    }
    cout << '\n';
}
