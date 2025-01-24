#include <iostream>
using namespace std;
int main()
{
    int n,largest=0,second=0,third=0;
    cout << "enter the number of array";
    cin >> n;
    int array[n];
    int array2[n];
    cout << "enter the number of elements";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (array[j]>largest)
        {
            largest = array[j];
        }
        
    }
    cout << "largest :"<< largest  << endl;
    for (int j = 0; j < n; j++)
    {
        if (second<array[j]&&array[j]<largest)
        {
            second = array[j];
        }
        
    }
    cout <<"second:"<< second<<endl;
    for (int j = 0; j < n; j++)
    {
        if (third < array[j]&&array[j]<second)
        {
            third = array[j];
        }
        
    }
    cout << "third:" << third;
}