#include <iostream>
using namespace std;

int main()
{
    int curyear, birthyear, age, salary;
    string name;
    cout << "enter the name" << endl;
    cin >> name;
    cout << "enter the salary" << endl;
    cin >> salary;
    while (name == "anu")
    {
        cout << "enter the curyear" << endl;
        cin >> curyear;
        cout << "enter the year of birth" << endl;
        cin >> birthyear;

        age = curyear - birthyear;
        cout << "your age" << age << endl;
        if (age > 21)
        {
            cout << "i am waiting to marry you" << endl;
            cout << "bring ur parents to talk" << endl;
            if (salary == 200000)
            {

                cout << "marrage fixed" << endl;
                cout << "i am your wife" << endl;
                break;
            }
            else
            {
                cout << "earn two lakh and marry me" << endl;
            }
        }
    }
    cout << "getlost child" << endl;
}