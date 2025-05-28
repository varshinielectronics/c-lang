#include <iostream>
using namespace std;

class book
{
public:
    string title;
    string author;
    float price;

    book()
    {
        title ="unknow";
        author="unknow";
        price=0;
    }

    void display()
    {
        cout<<"title"<<title<<"author"<<author<<"price"<<price;
    }
};


int main(){
    book b;
    b.display();
    return 0;
}