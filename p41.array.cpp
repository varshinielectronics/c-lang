#include <iostream>
using namespace std;

int main()
{
    int i, j;
    string name[4] = {"annu", "seenu", "ram", "seeta"};
    int age[4] = {20, 30, 40, 50};

    for (i = 0; i <= 4; i++)
    {
        cout << name[i] << endl;
        cout << age[i] << endl;
    }
}