#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number of stars " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << " ";
        }
        for (int l = 0; l < (2*i)-1; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}