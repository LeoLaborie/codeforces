#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, w;
    cin >> w;
    cin >> t;
    int res = 0;
    while (t--)
    {

        int a, b;
        cin >> a;
        cin >> b;
        res += a*b;
    }

    cout << (float)res/w;
    return 0;
}
