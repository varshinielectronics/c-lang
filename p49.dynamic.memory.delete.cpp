#include <iostream>
using namespace std;

int main()
{
    float *number1 = new float(5.678); // these way
    float *number2 = new float();      // these
    *number2 = 904.43;                 // way

    cout << *number1 << endl;
    cout << *number2 << endl;
}