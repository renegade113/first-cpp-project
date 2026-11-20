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

int firstDigit(int number) {
    while (number >= 10) {
        number /= 10;
    }
    return number;
}

bool comesBefore(int a, int b) {
    long long productA = digitProduct(a);
    long long productB = digitProduct(b);
    if (productA != productB) {
        return productA < productB;
    }

    int firstA = firstDigit(a);
    int firstB = firstDigit(b);
    if (firstA != firstB) {
        return firstA < firstB;
    }

    return a < b;
}

int main() {
    int numbers[1000];
    int count;

    cout << "Enter the sequence length and then its natural numbers:\n";
    if (!(cin >> count) || count < 0 || count > 1000) {
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        if (!(cin >> numbers[i]) || numbers[i] < 1) {
            return 1;
        }
    }

    for (int i = 1; i < count; ++i) {
        int current = numbers[i];
        int position = i;

        while (position > 0 && comesBefore(current, numbers[position - 1])) {
            numbers[position] = numbers[position - 1];
            --position;
        }

        numbers[position] = current;
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
