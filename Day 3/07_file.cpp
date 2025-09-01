// a a a a a
// b b b b b
// c c c c c
// d d d d d
// e e e e e
#include <iostream>
using namespace std;
int main()
{
    for (char i = 97; i <= 101; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}