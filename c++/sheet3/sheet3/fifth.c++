#include <iostream>
using namespace std;
int main()
{
    int term = 10, sum = 0, n2 = 1, count = 0, n1 = 0;
    cout << "enter term ";
    cin >> term;
    for (int i = 0; i < term; i++)
    {
        cout << n1 << " ";
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    
}