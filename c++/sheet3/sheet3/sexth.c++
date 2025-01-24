# include <iostream>
using namespace std;
int main (){
    string filename;
    cout << "enter the number of char" << endl;
    cin >> filename;
    int l = 0;
    for (int i = 0; filename[i]!='\0' ; i++)
    {
        l++;
    }
        cout << l;

}