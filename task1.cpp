#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "Type | Bytes | Minimum .. Maximum\n";
    cout << "bool | " << sizeof(bool) << " | false .. true\n";
    cout << "char | " << sizeof(char) << " | " << CHAR_MIN << " .. " << CHAR_MAX << '\n';
    cout << "signed char | " << sizeof(signed char) << " | "
         << SCHAR_MIN << " .. " << SCHAR_MAX << '\n';
    cout << "unsigned char | " << sizeof(unsigned char) << " | 0 .. " << UCHAR_MAX << '\n';
    cout << "short | " << sizeof(short) << " | " << SHRT_MIN << " .. " << SHRT_MAX << '\n';
    cout << "unsigned short | " << sizeof(unsigned short) << " | 0 .. " << USHRT_MAX << '\n';
    cout << "int | " << sizeof(int) << " | " << INT_MIN << " .. " << INT_MAX << '\n';
    cout << "unsigned int | " << sizeof(unsigned int) << " | 0 .. " << UINT_MAX << '\n';
    cout << "long | " << sizeof(long) << " | " << LONG_MIN << " .. " << LONG_MAX << '\n';
    cout << "unsigned long | " << sizeof(unsigned long) << " | 0 .. " << ULONG_MAX << '\n';
    cout << "long long | " << sizeof(long long) << " | " << LLONG_MIN << " .. " << LLONG_MAX << '\n';
    cout << "unsigned long long | " << sizeof(unsigned long long) << " | 0 .. " << ULLONG_MAX << '\n';
    cout << "float | " << sizeof(float) << " | " << -FLT_MAX << " .. " << FLT_MAX << '\n';
    cout << "double | " << sizeof(double) << " | " << -DBL_MAX << " .. " << DBL_MAX << '\n';
    cout << "long double | " << sizeof(long double) << " | "
         << -LDBL_MAX << " .. " << LDBL_MAX << '\n';

    cout << "\nInteger division: 7 / 2 = " << 7 / 2 << '\n';
    cout << "Floating-point division: 7.0 / 2 = " << 7.0 / 2 << '\n';
    cout << "Remainder: 7 % 2 = " << 7 % 2 << '\n';

    unsigned int maxUnsigned = UINT_MAX;
    cout << "Unsigned wraparound: UINT_MAX + 1 = " << maxUnsigned + 1u << '\n';
    cout << "For signed int, INT_MAX + 1 would cause undefined behavior.\n";
}
