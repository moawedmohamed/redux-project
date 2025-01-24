#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float num = 2.5;
    float result = pow(num, 3.0);
    cout << "The result is "<<setw(10)<<fixed << setprecision(2)<< " is " << result << endl;
    //    char grade = 'B';
    // switch (grade) {
    // case 'A':
    //     cout << "Excellent!" << endl;
    //     break;
    // case 'B':
    // case 'C':
    //     cout << "Well done!" << endl;
    //     break;
    // case 'D':
    //     cout << "You passed." << endl;
    //     break;
    // case 'F':
    //     cout << "Better try again." << endl;
    //     break;
    // }
}