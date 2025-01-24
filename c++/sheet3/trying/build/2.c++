# include <iostream>
using namespace std;
int main(){
    int num,sum;

    cout << "enter the number o term :" << endl;
    cin >> num;
    for (int  i = 0; i < num; i++)
    {
        sum += i;
        cout << i<<" ";
    }
    cout << "the sum of the natural number is :" << sum;
}