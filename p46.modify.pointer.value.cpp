#include <iostream>
using namespace std;

int main()
{
    string food = "kabab";
    string *food_address = &food;

    cout << "ordered food" << endl
         << food << endl;
    cout << "address of the food" << endl
         << food_address << endl;
    *food_address = "chicken briyani"; // can change the value which is al;ready stored by using * before the address
    cout << "ordered food" << food << endl;
}