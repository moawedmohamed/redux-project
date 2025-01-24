#include <iostream>
using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    cout<<sizeof(array);
    int size = sizeof(array) / sizeof(array[0]);
    cout << "the original array is:";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int tmp = array[start];
        array[start] = array[end];
        array[end] = tmp;
        start++;
        end--;
    }
    cout << "the reversed array is:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}