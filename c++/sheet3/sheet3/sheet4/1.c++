#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of array";
    cin >> n;
    int largest = 0;
    int array[n];
    cout << "enter the number in  array";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++)
    {

        if (array[j] > largest)
        {
            largest = array[j];
        }
    }
    cout << largest;
}