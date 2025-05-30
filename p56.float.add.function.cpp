#include <iostream>
using namespace std; // function means the block runs when it is called

float add(float a, float b)
{
    float c = a + b;
    return c;
}

int main()
{
    float x, y, result;
    cout << "enter the value of x" << endl;
    cin >> x;
    cout << "enter the value of y" << endl;
    cin >> y;
    result = add(x, y);
    cout << "result:" << result << endl;
}