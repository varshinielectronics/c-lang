#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int age;
    ofstream file("user.txt");

    cout << "enter name" << endl;
    cin >> name;
    cout << "enter age" << endl;
    cin >> age;
    file << "name:" << name << "\n age" << age << endl;
    file.close();
    return 0;
}