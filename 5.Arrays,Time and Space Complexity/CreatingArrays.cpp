#include <iostream>
using namespace std;
int main()
{
    // input
    int arr[5];
    for (int index = 0; index < 5; index++)
    {
        cout << "Enter the value for box index: " << index << endl;
        cin >> arr[index];
    }
    // print
    for (int index = 0; index < 5; index++)
    {
        cout << index[arr] << " ";
    }
}