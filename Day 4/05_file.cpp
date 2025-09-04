// a
// bb
// ccc
// dddd
// eeeee
#include <iostream>
using namespace std;
int main()
{
    for (char i = 97; i <= 101; i++)
    {
        for (char j = 97; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}