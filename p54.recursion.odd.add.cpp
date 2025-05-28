#include <iostream>
using namespace std;

int add_recursion(int num)
{
    cout << "the addition of odd numbers" << endl;
    if (num % 2 != 0)
    {
        return add_recursion(num + 1);
    }

    cout << "the addition of even numbers" << endl;
    if (num % 2 == 0)
    {
        return add_recursion(num - 1);
    }

    cout << "the addition of prime number" << endl;
    for (int i = 2; i < num; i++)
    {
        if (num % 2 == 0)
        {
            return add_recursion(num + 1);
        }
    }
    return add_recursion(num - 1);
}

int main()
{
    cout << add_recursion(10) << endl;
}