#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(int person_age,string person_name)
    {
        name=person_name;
        age=person_age;
    }
    
    void intro()
    {
        cout<<"my name is"<<name<<"my age is"<<age;
    }
};

int main(){
    person p1(27,"anu");
    person p2(22,"sam");
    p1.intro();
    p2.intro();
}