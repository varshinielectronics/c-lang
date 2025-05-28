#include <iostream>
using namespace std;

class person
{
public:
    string name;
};

int main(){
    person list_of_peoples[5];
    list_of_peoples[0].name="anu";
    list_of_peoples[1].name="anusha";
    list_of_peoples[2].name="anushree";
    list_of_peoples[3].name="anupriya";
    list_of_peoples[4].name="anuma";

    for(int i=0;i<5;i++)
    {
        cout<<list_of_peoples[i].name<<endl;
    }
}