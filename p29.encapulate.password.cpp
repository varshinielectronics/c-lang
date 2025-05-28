#include <iostream>
using namespace std;

class passwordChecker
{
private:
    int pin;

public:
    void setPin(int p)
    {
        pin=p;
    }

    void login(int pin_number)
    {
        if(pin==pin_number)
        {
            cout<<"logging in"<<endl;
        }else{
            cout<<"wrong pin"<<endl;
        }
    }
};


int main()
{
    passwordChecker p1;
    p1.setPin(1234);
    p1.login(1245);
    p1.setPin(1234);
    p1.login(1234);
}