#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, a, count = 0;

    while (n--)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;
}