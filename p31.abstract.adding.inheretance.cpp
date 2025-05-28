#include <iostream>
using namespace std;

class maths
{
public:
    virtual void add(int a,int b)=0;
    virtual void sub(int a,int b)=0;
    virtual void multi(int a,int b)=0;
    virtual void div(int a,int b)=0;
    virtual void mod(int a,int b)=0;
};

class calculation: public maths
{
public:
    void add(int a,int b)override
    {
        cout<<a+b<<endl;
    }

    void sub(int a,int b)override
    {
        cout<<a-b<<endl;
    }

    void multi(int a,int b)override
    {
        cout<<a*b<<endl;
    }

    void div(int a,int b)override
    {
        cout<<a/b<<endl;
    }

    void mod(int a,int b)override
    {
        cout<<a%b<<endl;
    }
};


int main()
{
    calculation c1;
    c1.add(10,20);
    c1.sub(10,20);
    c1.multi(10,20);
    c1.div(10,20);
    c1.mod(10,20);
}