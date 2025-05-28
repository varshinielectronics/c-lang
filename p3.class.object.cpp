#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
};

int main()
{
    person p1;
    p1.name="veena";
    p1.age=30;

    person p2;
    p2.name="anu";
    p2.age=80;
    cout<<p1.name<<p1.age<<"\n";
    cout<<p2.name<<p2.age<<"\n";
    return 0;
}