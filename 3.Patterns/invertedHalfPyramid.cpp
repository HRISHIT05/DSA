#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of inverted  half pyramid: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}