#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];

    int array2[n] = array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++)
    {
        array2[j] = array[j];
        for (int i = 0; i < n; i++)
        {

            if (array[j] != array2[j])
            {
                // cout << array2[j];
                array2[j] = array[j];
            }
        }

        // array2[j] = array[j];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array2[i];
    }
}