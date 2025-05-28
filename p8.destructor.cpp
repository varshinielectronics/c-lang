#include <iostream>
using namespace std;

class person
{
public:
    string name;
    person(string user_name)
    {
        name=user_name;
        cout<<"objected constructed"<<name<<endl;
    }

    ~person()
    {
        cout<<"object destructed"<<name<<endl;
    }
};

int main()
{
    person p1("anu");
    person p2("rubbish");

}