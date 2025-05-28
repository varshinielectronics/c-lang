#include <iostream>
#include <string>
using namespace std;

int main()
{
    string college = "city";
    string *ptr = &college;
    cout << college << endl;
    cout << &college << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}