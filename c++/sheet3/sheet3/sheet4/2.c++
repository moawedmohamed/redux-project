#include <iostream>
using namespace std;
int main()
{
    int n, largest = 0, second = 0, third = 0;
    cout << "enter the number of n";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (largest < array[j])
        {
            largest = array[j];
        }
    }
    cout << largest << endl;
    for (int x = 0; x < n; x++)
    {
        if (array[x] > second && array[x] < largest)
        {
            second = array[x];
        }
    }
    cout << second << endl;

    for (int l = 0; l < n; l++)
    {
        if (array[l] > third && second > array[l])
        {
            third = array[l];
        }
    }
    cout << third << endl;
}