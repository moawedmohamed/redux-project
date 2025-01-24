#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num = 333.546372;
    for (int i = 0; i < 6; i++)
    {

        cout << left << setw(15) << fixed << setprecision(i) << num << endl;
    }
}
// cout << left << setw(15) << fixed << setprecision(2) << num << endl;
// cout << left << setw(15) << fixed << setprecision(3) << num << endl;
// cout << left << setw(15) << fixed << setprecision(4) << num << endl;
// cout << left << setw(15) << fixed << setprecision(5) << num << endl;
