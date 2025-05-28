#include <iostream>
using namespace std;

class area
{
public:
    int length=0,breadth=0,radius=0;

    area(int in_length,int in_breadth)
    {
        length=in_length;
        breadth=in_breadth;
    }

    area(int in_radius)
    {
        radius=in_radius;
    }

    void result_area()
    {
        if(radius==0)
        {
            cout<<length*breadth<<endl;
        }else{
            cout<<radius*radius*3.14<<endl;
        }
    }
};
int main(){

    area a1(10);
    a1.result_area();
}