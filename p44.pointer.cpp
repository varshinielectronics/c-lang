#include <iostream>
using namespace std;

int main()
{
    string name = "varun";        // we are storing the name as varun
    string *name_address = &name; // we are getting the address of the name //here instead of giving name_address i can also give ptr (pointer) //* is import for the address
    cout << name << endl;
    cout << &name << endl; //&name also tells us about the address of the name
    cout << name_address << endl;
}