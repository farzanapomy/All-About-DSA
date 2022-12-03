#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    int count[max + 1] = { 0 };
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 0; i < max + 1; i++) {
        if (count[i] > 0) {
            cout << i << " => " << count[i] << endl;
        }
    }
    return 0;
}
