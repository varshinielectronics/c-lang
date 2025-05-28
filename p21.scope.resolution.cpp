#include <iostream>
using namespace std;

class person
{
public:
    void hi();
    void hello();
};

void person::hi()
{
    cout<<"hi there";
}

void person::hello()
{
    cout<<"HELLO THERE";

}
int main(){
    person p1;
    p1.hi();
    p1.hello();
}