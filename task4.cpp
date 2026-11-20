#include <iostream>

using namespace std;

int main() {
    long long x, i;

    // Input: x, then the bit index i. The rightmost bit has index 0.
    if (!(cin >> x >> i) || x <= 0 || x >= 1000000000 || i < 0) {
        return 1;
    }

    // x fits in 30 bits, so any higher bit is zero.
    if (i >= 30) {
        cout << 0 << '\n';
    } else {
        cout << ((x >> i) & 1) << '\n';
    }
}
