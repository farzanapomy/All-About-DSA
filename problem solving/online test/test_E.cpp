#include <iostream>
#include <cmath>

using namespace std;

int numDivisors(int n) {
    int divisors = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If i is a divisor, count it and also count its complement
            if (n / i == i)
                divisors++;
            else
                divisors += 2;
        }
    }
    return divisors;
}

int calculateSum(int a, int b, int c) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += numDivisors(i);
        sum %= 1073741824; // Take modulo 1073741824 (2^30)
    }
    return sum;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = calculateSum(a, b, c);
    cout << result << endl;

    return 0;
}
