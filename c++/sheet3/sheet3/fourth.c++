# include <iostream>
using namespace std;
int main (){
    int num,sum=0;
    for (int i = 100; i < 200; i++)
    {
        if (i%9==0)
        {
            cout << "the number is " << i<<endl;
            sum += i;
        }
    }
    cout << "the sum is :" << sum;
}