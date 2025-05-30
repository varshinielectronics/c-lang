#include <iostream> //function means the block runs when it is called
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x, y, result;
    cout << "enter the value of x" << endl;
    cin >> x;
    cout << "enter the value of y" << endl;
    cin >> y;
    result = add(x, y);
    cout << "result:" << result << endl;
}