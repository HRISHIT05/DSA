#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of pyramid : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <  i +1; j++)//for space
        {
            cout << " ";
        }
        for (int j = 0; j <n-i; j++)// for star
        {
            cout << "* ";
        }
        cout << endl;
    }
}