#include <iostream>
using namespace std;

class A
{
private:
  int x=5;
  int y=10;
  friend void show(A);
};

void show(A obj)
{
    cout<<"value of x"<<obj.x<<endl;
    cout<<"value of y"<<obj.y<<endl;
}

int main()
{
 A a;
 show(a);
 return 0;
}