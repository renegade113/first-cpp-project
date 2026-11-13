#include <iostream>
#include <limits>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // 1. Основные типы данных

    cout << "=== ТИПЫ ДАННЫХ ===" << endl;

    // int - целое число
    cout << "\nТип int:" << endl;
    cout << "Размер: " << sizeof(int) << " байт" << endl;
    cout << "Минимум: " << numeric_limits<int>::min() << endl;
    cout << "Максимум: " << numeric_limits<int>::max() << endl;

    // short - короткое целое число
    cout << "\nТип short:" << endl;
    cout << "Размер: " << sizeof(short) << " байт" << endl;
    cout << "Минимум: " << numeric_limits<short>::min() << endl;
    cout << "Максимум: " << numeric_limits<short>::max() << endl;

    // long long - большое целое число
    cout << "\nТип long long:" << endl;
    cout << "Размер: " << sizeof(long long) << " байт" << endl;
    cout << "Минимум: " << numeric_limits<long long>::min() << endl;
    cout << "Максимум: " << numeric_limits<long long>::max() << endl;

    // float - вещественное число
    cout << "\nТип float:" << endl;
    cout << "Размер: " << sizeof(float) << " байт" << endl;
    cout << "Минимум: " << numeric_limits<float>::lowest() << endl;
    cout << "Максимум: " << numeric_limits<float>::max() << endl;

    // double - вещественное число повышенной точности
    cout << "\nТип double:" << endl;
    cout << "Размер: " << sizeof(double) << " байт" << endl;
    cout << "Минимум: " << numeric_limits<double>::lowest() << endl;
    cout << "Максимум: " << numeric_limits<double>::max() << endl;

    // char - символ
    cout << "\nТип char:" << endl;
    cout << "Размер: " << sizeof(char) << " байт" << endl;

    // bool - логический тип
    cout << "\nТип bool:" << endl;
    cout << "Размер: " << sizeof(bool) << " байт" << endl;

    // 2. Расположение данных в памяти

    cout << "\n=== ПАМЯТЬ ===" << endl;

    int a = 10;
    int b = 20;

    // Выводим адреса переменных в памяти
    cout << "Адрес переменной a: " << &a << endl;
    cout << "Адрес переменной b: " << &b << endl;

    // Выводим размер переменной
    cout << "Переменная a занимает: " << sizeof(a) << " байт" << endl;

    // 3. Арифметические операции

    cout << "\n=== АРИФМЕТИЧЕСКИЕ ОПЕРАЦИИ ===" << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "b / a = " << b / a << endl;
    cout << "b % a = " << b % a << endl;

    // 4. Операции сравнения

    cout << "\n=== СРАВНЕНИЯ ===" << endl;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // 5. Логические операции

    cout << "\n=== ЛОГИЧЕСКИЕ ОПЕРАЦИИ ===" << endl;

    cout << "true && false: " << (true && false) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "!true: " << (!true) << endl;

    // 6. Битовые операции

    cout << "\n=== БИТОВЫЕ ОПЕРАЦИИ ===" << endl;

    int x = 5;
    int y = 3;

    cout << "x & y = " << (x & y) << endl;
    cout << "x | y = " << (x | y) << endl;
    cout << "x ^ y = " << (x ^ y) << endl;
    cout << "x << 1 = " << (x << 1) << endl;
    cout << "x >> 1 = " << (x >> 1) << endl;

    cout << "\nПрограмма завершена." << endl;

    return 0;
}