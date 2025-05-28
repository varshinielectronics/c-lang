#include <iostream>
#include <vector>
using namespace std;

class person
{
public:
    string name;
    string aadhar;
    string pan;

    person(string user_name,string p_card,string a_card)
    {
        name=user_name;
        pan=p_card;
        aadhar=a_card;
    }
    void display_details(){
        cout<<"user details"<<endl;
        cout<<"username"<<name<<endl;
        cout<<"pancard"<<pan<<endl;
        cout<<"aadhar"<<aadhar<<endl;
        cout<<"===============================";
    }
};

int main()
{
    string name,pan,aadhar;
    vector <person> list_of_users;
    for(int i=0;i<2;i++)
    {
        cout<<"enter the name"<<i+1<<endl;
        cin>>name;
        cout<<"enter the pan card number"<<i+1<<endl;
        cin>>pan;
        cout<<"enter the aadhar number"<<i+1<<endl;
        cin>>aadhar;
        list_of_users.push_back(person(name,pan,aadhar));
    }

    for(person user: list_of_users)
    {
        user.display_details();
    }
    
}
    
