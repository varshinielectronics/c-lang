#include <iostream>
using namespace std;

int square(int a)
{
    int sqr_area = a * a;
    return sqr_area;
}

int circle(int r)
{
    int circle_area = 3.14 * r;
    return circle_area;
}

int rectangle(int l, int b)
{
    int rectangle_area = l * b;
    return rectangle_area;
}

int triangle(int base, int height)
{
    int triangle_area = 0.5 * base * height;
    return triangle_area;
}

int main()
{
    int full_area = square(10) + triangle(12, 5);
    int sub_area = circle(2) - rectangle(3, 7) - triangle(3, 2);
    cout << full_area - sub_area << endl;
}