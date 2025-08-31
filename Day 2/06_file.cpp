#include <iostream>
using namespace std;
int main()
{
    int num, pow;
    cout << "Please enter the Number and Its Exponential value:" << endl;
    cin >> num >> pow;
    int n = num;
    for (int i = 1; i < pow; i++)
    {
        n = n * num;
    }
    cout << n << endl;
}