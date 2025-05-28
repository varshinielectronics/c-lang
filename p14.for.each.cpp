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
    vector <person> list_of_users;
    list_of_users.push_back(person("user1","pcard1234","acard65467"));
    list_of_users.push_back(person("user2","pcard12345","acard6546756"));
    list_of_users.push_back(person("user3","pcard12344","acard6546743"));
    list_of_users.push_back(person("user4","pcard123544","acard6546547"));
    list_of_users.push_back(person("user5","pcard127634","acard6546776"));

    for(person users : list_of_users)
    {
        users.display_details();
    }
}
    