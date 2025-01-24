#include <iostream>
using namespace std;
int main()
{
    int num, i;
    int counter = 0;
    // cout << "Enter a number: ";
    // cin >> num;
    // for ( i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {

    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
    // cout << endl;
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 8; j > i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}