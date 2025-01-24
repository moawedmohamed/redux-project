#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int term, i;
    cout << "enter the term" << endl;
    cin >> term;
    cout << "enter the  number you want to cube it";
    for (i = 0; i < term; i++)
    {
        int result = i * i * i;
        cout << "Number is:" << i << " and the cube of  " << i << " is " << result << endl;
        }
}