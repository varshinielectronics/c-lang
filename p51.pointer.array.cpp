#include <iostream>
using namespace std;

class person
{
public:
    string name;
    void setName()
    {
        cout << "enter the name";
        cin >> name;
    }
    void getName()
    {
        cout << name << endl;
    }
};

int main()
{
    person *listofpeople = new person[3];
    for (int i = 0; i < 3; i++)
    {
        listofpeople[i].setName();
    }
    for (int i = 0; i < 3; i++)
    {
        listofpeople[i].getName();
    }
}