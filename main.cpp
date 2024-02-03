#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = rand() % 100 + 1;
        }
    }
}

void displayArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    int sum = 0;
    cout << "Введите колчество строк и  стобцов: ";
    cin >> rows >> cols;

    int** Array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        Array[i] = new int[cols];
    }
    
    fillArray(Array, rows, cols);
    displayArray(Array, rows, cols);
    
    for (int i = 0; i < rows; i++) {
        sum += Array[i][i];
    }
    
    cout << "Сумма главной диагонали: " << sum;
    delete[] Array;
    return 0;
}
