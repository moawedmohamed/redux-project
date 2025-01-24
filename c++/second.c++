#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a and b:";
    cin >> a >> b;
    int result1 = powl(a, 2.0);
    int result2 = powl(b, 2.0);
    cout << result1 +( 2 * result1 * result2 )+ result2;
}
// 4+4+4+4