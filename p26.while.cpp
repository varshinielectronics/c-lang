#include <iostream>
using namespace std;

int main(){
    int number;
    while (true)
    {
        cout<<"guess the number"<<endl;
        cin>>number;
        if(number==5)
        {
            break;
        }
    }
}