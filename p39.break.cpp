#include <iostream>
using namespace std;

int main()
{
    string name;
    while (true)
    {
        cout << "enter the name" << endl;
        cin >> name;
        if (name == "joe")
        {
            cout << "hello buddy";
            break;
        }
    }
}
