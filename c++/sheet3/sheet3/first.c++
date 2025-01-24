#include <iostream>
using namespace std;
int main()
{
    int num, max = 0, min = 1e6, sum = 0, count = 0;
    cout << "enter the number " << endl;
    while (true)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }

        if (num > 0)
        {
            count++;
            sum += num;
            if (num > max)
            {
                max = num;
            }
            if (min > num)
            {
                min = num;
            }
        }
    }
    cout << count << endl;
    cout << max << endl;
    cout << min << endl;
    cout << (float)sum / count << endl;
}