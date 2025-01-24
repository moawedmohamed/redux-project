#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius, area, parameter, diameter;
    cout << "Enter the radius  ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "the area is " << area << endl;
    parameter = 2 * 3.14 * radius;
    cout << "the parameter is " << parameter << endl;
    diameter = 2 * radius;
    cout << "the diameter is  " << diameter;
    return 0;
}