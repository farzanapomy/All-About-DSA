#include <bits/stdc++.h>
using namespace std;

template <typename T>
T myMax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
    // (a > b) ? a : b;
}

int main()
{
    cout << "The maximum of 5 and 2 is: " << myMax<int>(5, 2) << endl;
    cout << "The maximum of 5 and 2 is: " << myMax<float>(5.5, 2) << endl;
    cout << "The maximum of 5 and 2 is: " << myMax<char>('p', 'a') << endl;
}