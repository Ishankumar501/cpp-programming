#include <iostream>
using namespace std;

void addition(int a[10][10], int b[10][10], int r, int c) {
    int result[10][10];
    cout << "Addition:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void subtraction(int a[10][10], int b[10][10], int r, int c) {
    int result[10][10];
    cout << "Subtraction:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] - b[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplication(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int result[10][10] = {};
    cout << "Multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int a[10][10], int r, int c) {
    cout << "Transpose:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
}

int main() {
    int a[10][10], b[10][10];
    int r1, c1, r2, c2, choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> a[i][j];

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> b[i][j];

    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (r1 == r2 && c1 == c2)
                addition(a, b, r1, c1);
            else
                cout << "Addition not possible";
            break;

        case 2:
            if (r1 == r2 && c1 == c2)
                subtraction(a, b, r1, c1);
            else
                cout << "Subtraction not possible";
            break;

        case 3:
            if (c1 == r2)
                multiplication(a, b, r1, c1, c2);
            else
                cout << "Multiplication not possible";
            break;

        case 4:
            cout << "For Matrix A:\n";
            transpose(a, r1, c1);
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}