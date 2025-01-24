#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    float result1 = a * a;
    float result2 = b * b;
    float sum = result1 + result2;
    float total = sqrt(sum);
    cout << "the result of equation is " << total;
}