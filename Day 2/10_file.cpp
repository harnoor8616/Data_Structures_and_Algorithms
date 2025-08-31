#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n, next;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        next = a + b;
        cout << next << endl;
        a = b;
        b = next;
    }
}