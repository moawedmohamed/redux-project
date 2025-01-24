#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxf = 0, mostf = 0;
    for (int i = 0; i < n; i++)
    {
        int feq = 0;
        for (int j = 0; j < n; j++)
           
            if (arr[i] == arr[j])
                feq++;

        if (feq > maxf)
        {
            maxf = feq;
            mostf = arr[i];
        }
    }
    cout << mostf << " " << maxf << endl;
}