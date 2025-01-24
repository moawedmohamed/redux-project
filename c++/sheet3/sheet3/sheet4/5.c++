#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    int array[5] = {1, 2, 3, 4, 5};
    cout << "enter your search here" << endl;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (n == array[i])
        {
            cout << "you search found ";
            break;
        }
        count++;
        if (n != array[i] && count == 5)
        {
            cout << "you search not found ";
        }
    }
}