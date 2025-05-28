#include <iostream>
using namespace std;

int main()
{
    string myname[3] = {"anu", "seenu", "max"};
    int myage[1] = {20};
    for (string i : myname)
    {
        cout << i << endl;
        for (int j : myage)
        {
            cout << j << endl;
        }
    }
    return 0;
}
