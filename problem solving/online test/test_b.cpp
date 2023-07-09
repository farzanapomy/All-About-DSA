// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, total = 0;
//     cin >> t;
//     while (t--)
//     {
//         int day, num;
//         cin >> day >> num;
//         total += (day * 4 + num);
//         cout << total << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int  t;
    cin >> t;
    while (t--)
    {
        int day, num,ans = 0;
        cin >> day >> num;


        ans += (day * 4 + num);
        cout << ans << endl;
    }
    return 0;
}