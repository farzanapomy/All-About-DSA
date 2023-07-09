#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int bucket1, bucket2;
        cin >> bucket1 >> bucket2;
        int totalBuckets = bucket1 / bucket2;
        int totalPeople = totalBuckets / 2;
        cout << totalPeople << endl;
    }
    return 0;
}
