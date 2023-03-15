#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, sum = 0, sub = 0;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            sum++;
            // cout << "even";
        }
        else
        {
            sub++;
            // cout << "odd";
        }
    }
    if (sum > sub)
    {
        cout << "The total even number is : " << sum << endl
             << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY";
    }
}