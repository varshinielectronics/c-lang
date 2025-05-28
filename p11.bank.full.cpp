#include <iostream>
#include <vector>
using namespace std;

class person
{
public:
    string name;
    string aadhar;
    string pan;

    person(string user_name, string p_card, string a_card)
    {
        name = user_name;
        pan = p_card;
        aadhar = a_card;
    }
    void display_details()
    {
        cout << "user details" << endl;
        cout << "username" << name << endl;
        cout << "pancard" << pan << endl;
        cout << "aadhar" << aadhar << endl;
        cout << "===============================";
    }
};

int main()
{
    {
        string name, pan, aadhar;
        vector<person> list_of_users;
        int option;
        while (true)
        {
            cout << "choose the option:" << endl;
            cout << "1. create a account" << endl;
            cout << "2. list all the users" << endl;
            cout << "3. exit the program" << endl;
            cin >> option;
            switch (option)
            {
            case 1:
                cout << "create a account" << endl;
                cout << "enter the name" << endl;
                cin >> name;
                cout << "enter the pan card number" << endl;
                cin >> pan;
                cout << "enter the aadhar number" << endl;
                cin >> aadhar;
                list_of_users.push_back(person(name, pan, aadhar));
                break;
            case 2:
                cout << "list all the users" << endl;
                for (person user : list_of_users)
                {
                    user.display_details();
                }
                break;
            case 3:
                cout << "exit the program" << endl;
                break;
            default:
                break;
            }
        }
    }
}
