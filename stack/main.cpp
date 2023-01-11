#include <bits/stdc++.h>
#include "MYSTACK.h"
using namespace std;

int main()
{
    Stack<float> st;

    st.push(1.2);
    st.push(2.6);
    st.push(3.4);
    while (!st.empty())
    {
        cout << st.pop() << endl;
    }

    st.pop();

    cout << "HEllo" << endl;

    return 0;
}