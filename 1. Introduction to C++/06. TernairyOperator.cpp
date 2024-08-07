#include <iostream>
using namespace std;
int main()
{
    int x ;
    cin>>x;
    int y;
    cin>>y;
    int result = (x > y) ? x : y;
    cout << "larger value is " << result << endl;
    return 0;
}