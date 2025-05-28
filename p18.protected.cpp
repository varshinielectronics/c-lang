#include <iostream>
using namespace std;

class Base{
    protected:
        int x;
};

class Derived:public base{
    public:
        void setX(int val)
        {
            x = val;
        }

        void display()
        {
            cout<<x;
        }
};
main(){
    Derived d;
    d.setX(20);
    d.display();
    return 0;
 }