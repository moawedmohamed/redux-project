#include <iostream>
using namespace std;
int main()
{
    int a1, a2;
    int arr1[a1][a2];
    int arr2[a1][a2];
    int sum[a1][a2];

    cout << "enter size of arr1" << endl
         << "enter the size of array2" << endl;
    cin >> a1 >> a2;

    cout << "enter the numbers" << endl;

    for (int i = 0; i < a1; i++)
    {

        for (int j = 0; j < a2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "enter the numbers" << endl;

    for (int i = 0; i < a1; i++)
    {

        for (int j = 0; j < a2; j++)
        {
            cin >> arr2[i][j];
        }
        for (int i = 0; i < a1; i++)
        {

            for (int j = 0; j < a2; j++)
            {
                cout << arr2[i][j];
            }
        }
    }
}