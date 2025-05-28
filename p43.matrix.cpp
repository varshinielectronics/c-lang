#include <iostream>
using namespace std;

int main()
{
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows and columns of Matrix A: " << endl;
    cin >> rowsA >> colsA;

    cout << "Enter the number of rows and columns of Matrix B: " << endl;
    cin >> rowsB >> colsB;
    if (colsA != rowsB)
    {
        cout << "Matrix multiplication not possible. Columns of A must equal rows of B" << "\n"
             << endl;
        return 0;
    }

    int matrixA[2][2], matrixB[2][2], result[2][2];
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            result[i][j] = 0;
        }
    }
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cout << "Enter element at position: " << i + 1 << j + 1 << endl;
            cin >> matrixA[i][j];
        }
    }
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << "Enter element at position" << i + 1 << j + 1 << endl;
            cin >> matrixB[i][j];
        }
    }
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    cout << "Resultant Matrix after multiplication" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << result[i][j];
        }
        cout << "\n"
             << endl;
    }

    return 0;
}