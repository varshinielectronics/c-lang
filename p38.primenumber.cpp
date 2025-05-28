#include <iostream>
using namespace std;

bool primechecking(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % 2 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number, result;
    cout << "enter a number" << endl;
    cin >> number;
    result = primechecking(number);
    if (result)
    {
        cout << "its prime" << endl;
    }
    else
    {
        cout << "its not prime" << endl;
    }
}