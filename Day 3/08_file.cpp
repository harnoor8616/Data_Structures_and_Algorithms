// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e
#include <iostream>
using namespace std;
int main()
{
    for (int j = 1; j <= 5; j++)
    {
        for (char i = 97; i <= 101; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}