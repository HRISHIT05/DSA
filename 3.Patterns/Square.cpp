#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter side: " << endl;
    cin >> side;

    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}