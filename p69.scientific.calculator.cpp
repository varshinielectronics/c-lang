#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Factorial function
unsigned long long factorial(int n)
{
    if (n < 0)
        return 0; // not defined for negatives
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int main()
{
    int choice;
    double a, b;

    while (true)
    {
        cout << "\n=== Scientific Calculator ===\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power (x^y)\n";
        cout << "6. Square Root\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "10. Log (base 10)\n";
        cout << "11. Natural Log (ln)\n";
        cout << "12. Factorial\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b == 0)
                cout << "Error: Division by zero.\n";
            else
                cout << "Result = " << a / b << endl;
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> a;
            if (a < 0)
                cout << "Error: Square root of negative number.\n";
            else
                cout << "Result = " << sqrt(a) << endl;
            break;
        case 7:
            cout << "Enter angle in degrees: ";
            cin >> a;
            cout << "sin(" << a << ") = " << sin(a * M_PI / 180) << endl;
            break;
        case 8:
            cout << "Enter angle in degrees: ";
            cin >> a;
            cout << "cos(" << a << ") = " << cos(a * M_PI / 180) << endl;
            break;
        case 9:
            cout << "Enter angle in degrees: ";
            cin >> a;
            cout << "tan(" << a << ") = " << tan(a * M_PI / 180) << endl;
            break;
        case 10:
            cout << "Enter a number: ";
            cin >> a;
            if (a <= 0)
                cout << "Error: log undefined for non-positive numbers.\n";
            else
                cout << "log(" << a << ") = " << log10(a) << endl;
            break;
        case 11:
            cout << "Enter a number: ";
            cin >> a;
            if (a <= 0)
                cout << "Error: ln undefined for non-positive numbers.\n";
            else
                cout << "ln(" << a << ") = " << log(a) << endl;
            break;
        case 12:
            int n;
            cout << "Enter a non-negative integer: ";
            cin >> n;
            if (n < 0)
                cout << "Error: Factorial of negative number is undefined.\n";
            else
                cout << n << "! = " << factorial(n) << endl;
            break;
        case 0:
            cout << "Exiting calculator. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
