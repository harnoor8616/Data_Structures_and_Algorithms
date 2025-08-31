#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please enter the number" << endl;
    cin >> n;
    cout << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << n << "*" << i << "=" << n * i << endl;
    }
}