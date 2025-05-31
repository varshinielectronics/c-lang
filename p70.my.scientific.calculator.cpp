#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main()
{
    int choice;
    double a, b, angle, radians, degree;

    cout << "1. add" << endl;
    cout << "2. sub" << endl;
    cout << "3. multiply" << endl;
    cout << "4. divide" << endl;
    cout << "5. power" << endl;
    cout << "6. sqroot" << endl;
    cout << "7. log(base 10)" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "enter the two numbers" << endl;
        cin >> a >> b;
        cout << "addition of two numbers" << a + b << endl;
        break;
    case 2:
        cout << "enter the two numbers" << endl;
        cin >> a >> b;
        cout << "subtraction of two numbers" << a - b << endl;
        break;
    case 3:
        cout << "enter the two numbers" << endl;
        cin >> a >> b;
        cout << "multiply of two numbers" << a * b << endl;
        break;
    case 4:
        cout << "enter the two numbers" << endl;
        cin >> a >> b;
        cout << "division of two numbers" << a / b << endl;
        break;
    case 5:
        cout << "enter the base and the exponent numbers" << endl;
        cin >> a >> b;
        cout << "power is" << pow(a, b) << endl;
        break;
    case 6:
        cout << "enter the numbers" << endl;
        cin >> a;
        cout << "squart of a number" << sqrt(a) << endl;
        break;
    case 7:
        cout << "Enter a number: ";
        cin >> a;
        if (a <= 0)
            cout << "Error: log undefined for non-positive numbers.\n";
        else
            cout << "log(" << a << ") = " << log10(a) << endl;
        break;
    }
    return 0;
}
