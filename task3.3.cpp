#include <iostream>

using namespace std;

int main() {
    long long matrix[100][100];
    int rows, columns;

    cout << "Enter the number of rows, the number of columns, and the matrix:\n";
    if (!(cin >> rows >> columns) || rows < 1 || rows > 100 ||
        columns < 1 || columns > 100) {
        return 1;
    }

    int bestRow = 0;
    int minEven = columns + 1;

    for (int row = 0; row < rows; ++row) {
        int evenCount = 0;
        for (int column = 0; column < columns; ++column) {
            int value;
            if (!(cin >> value)) {
                return 1;
            }
            matrix[row][column] = value;

            if (value % 2 == 0) {
                ++evenCount;
            }
        }

        if (evenCount < minEven) {
            minEven = evenCount;
            bestRow = row;
        }
    }

    for (int column = 0; column < columns; ++column) {
        matrix[bestRow][column] *= matrix[bestRow][column];
    }

    cout << "Selected row: " << bestRow + 1 << "\nResult:\n";
    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; ++column) {
            if (column > 0) {
                cout << ' ';
            }
            cout << matrix[row][column];
        }
        cout << '\n';
    }
}
