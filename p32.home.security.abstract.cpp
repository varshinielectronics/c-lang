#include <iostream>
using namespace std;

class security
{
public:
    virtual void camera()=0;
    virtual void dog()=0;
    virtual void watchman()=0;
    virtual void compound()=0;
    virtual void gate()=0;
};

class home: public security
{
public:
    void camera()override
    {
        cout<<"a good camera is needed"<<endl;
    }

    void dog()override
    {
        cout<<"need a husk dog"<<endl;
    }

    void watchman()override
    {
        cout<<"age of 30"<<endl;
    }

    void compound()override
    {
        cout<<"made of birla cement"<<endl;
    }

    void gate()override
    {
        cout<<"use indus 555"<<endl;
    }
};


int main()
{
    home h1;
    h1.camera();
    h1.dog();
    h1.watchman();
    h1.compound();
    h1.gate();
}