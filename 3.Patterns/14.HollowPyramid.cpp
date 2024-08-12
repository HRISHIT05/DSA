#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of pyramid : " << endl;
    cin >> n;
    {
        for (int i = 0; i < n; i++)
        {
            // spaces
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            // stars
            for (int j = 0; j < i + 1; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  "; // cout<<"* "; to print full pyramid
                }
            }
            cout << endl;
        }
    }
}