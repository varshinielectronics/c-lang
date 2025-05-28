#include <iostream>
using namespace std;

class person
{
public:
    string name = " default name";
    int present_age, current_year, birth_year;
    person(string name, int current_year, int birth_year)
    {
        this->name = name;
        this->present_age = present_age;
    }
    void print()
    {
        cout << "enter the name" << name << endl;
        cout << "enter the current_year" << endl;
        cin >> current_year;
        cout << "enter the birth year" << endl;
        cin >> birth_year;
        present_age = current_year - birth_year;
        cout << "the birth year" << endl
             << present_age << endl;
    }
};

int main()
{
    person p1("varshini", 2035, 2006);
    p1.print();
    cout << "size opf the variable" << sizeof(p1) << "bytes" << endl;
}