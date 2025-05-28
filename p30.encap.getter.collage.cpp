 #include <iostream>
 using namespace std;


class student
{
private:
    string name;
    string college = "city engineering college";

public:
    student(string n)
    {
        name = n;
    }

    string getCollege()
    {
        return college;
    }

    void getDetails()
    {
        cout << " name: " << name << endl;
        cout << "college:" << endl;
    }
 };


 int main()
 {
    student s1("seenu");
    cout << s1.getCollege() <<endl;
    s1.getDetails();
 }