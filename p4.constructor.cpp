#include <iostream>
using namespace std;
class person{
    public:
        person()
        {
            cout<<"hi from the constructor";
        }
        void hello()
        {
            cout<<"hi from the method";
        }
};
int main(){
    person p1;
    p1.hello();

}