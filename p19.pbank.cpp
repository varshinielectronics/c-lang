#include <iostream>
using namespace std;

class person
{
public:
    string name;
    string adhaar;
    string pan;
};

int main(){
    person list_of_peoples[5];
    list_of_peoples[0].name="anu";
    list_of_peoples[1].name="anusha";
    list_of_peoples[2].name="anushree";
    list_of_peoples[3].name="anupriya";
    list_of_peoples[4].name="anuma"; 
    list_of_peoples[0].adhaar="54656";
    list_of_peoples[1].adhaar="546556";
    list_of_peoples[2].adhaar="5467856";
    list_of_peoples[3].adhaar="54657836";
    list_of_peoples[4].adhaar="54676956";
    list_of_peoples[0].pan="jhgjhbv";
    list_of_peoples[1].pan="jhgjhfgbv";
    list_of_peoples[2].pan="jhgjhvnbv";
    list_of_peoples[3].pan="jhgjhjuhbv";
    list_of_peoples[4].pan="jhgfghjhbv";
    
    for(int i=0;i<5;i++)
    {
        cout<<list_of_peoples[i].name<<endl;
        cout<<list_of_peoples[i].adhaar<<endl;
        cout<<list_of_peoples[i].pan<<endl;
    }
}