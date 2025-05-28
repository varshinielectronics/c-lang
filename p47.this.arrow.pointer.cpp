#include <iostream>
using namespace std;

class college
{
public:
    string course = "engineering course";
    string marks = "subject marks";
    college(string course, string marks)
    {
        this->course = course;
        this->marks = marks;
    }
    void print()
    {
        cout << "whats the course name" << endl
             << course << endl;
        cout << "did he pass or fail" << endl
             << marks << endl;
    }
};

int main()
{
    college c1("electronics", "fail");
    c1.print();
}