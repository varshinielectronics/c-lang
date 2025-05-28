#include <iostream>
using namespace std;

int main(){
    {
        int option;
        while (true)
        {
            cout<<"choose the option:"<<endl;
            cout<<"1. create a account"<<endl;
            cout<<"2. list all the users"<<endl;
            cout<<"3. exit the program"<<endl;
            cin>>option;
            switch (option)
            {
            case 1:
                cout<<"create a account"<<endl;
                break;
            case 2:
                cout<<"list all the users"<<endl;
                break;
            case 3:
                cout<<"exit the program"<<endl;
                break;
            default:
                break;
            }
        }
    }


}