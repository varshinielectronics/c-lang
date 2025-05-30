#include <iostream>
using namespace std;

int calculate(int a)
{
    int volume = a * a * a;
    return volume;
}

int main()
{
    int a, volume_of_cube;
    cout << "enter the value of a" << endl;
    cin >> a;
    volume_of_cube = calculate(a);
    cout << "volume of cube:" << volume_of_cube << endl;
}