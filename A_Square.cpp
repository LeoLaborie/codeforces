#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{

    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // If both numbers are equal
    if (a == b)
        return a;

    // If a is greater
    if (a > b)
        return gcd(a - b, b);

    // If b is greater
    return gcd(a, b - a);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, res = 1;
        cin >> a;
        for (int i = 0; i < 3; ++i)
        {
            cin >> b;
            if (a != b)
            {
                res = 0;
            }
        }
        if (res)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
