#include <iostream>
using namespace std;

int main()
{
    int term, sum = 0, count = 0;
    // Input the number of terms
    cout << "Input number of terms: ";
    cin >> term;
    cout << "The odd numbers are: ";
    for (int i = 1; count < term; i += 2)
    {
        cout << i << " ";
        sum += i;
        count++; // Increment count outside the loop header
    }
    cout << "\nThe Sum of odd Natural Numbers upto " << term << " terms: " << sum << endl;

    return 0;
}
