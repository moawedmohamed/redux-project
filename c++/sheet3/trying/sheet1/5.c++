#include <iostream>
using namespace std;
int main()
{
    int sum = 0 , count,i;
    for (  i = 1; i < 100; i++)
    {
        
        if (i%2==0)
        {
            cout << i<<endl;
            sum += i;
        }
        
    }
    cout << "the sum is " << sum << endl;
    cout << i;
}