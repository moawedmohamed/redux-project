#include <iostream>
using namespace std;
int main()
{
    int fac = 1;
    for (int i = 1; i < 10; i++)
    {
        fac *= i;
        // cout<<": "<<i<<endl;
        cout << "the fat is " << fac << endl;
    }
}