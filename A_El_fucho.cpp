#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        int l, w, m = 0;
        w = n;
        l = 0;
        while ((w != 1) || (l != 1))
        {
            m = m + (int)w / 2 + (int)l / 2;
            // cout << m <<endl;
            n = w;
            w = w / 2 + (w % 2 == 0 ? 0 : 1);
            // cout << w <<endl;
            l = n - w + l / 2 + (l % 2 == 0 ? 0 : 1);
            // cout << l <<endl;
        }
        m++;
        cout << m << endl;
    }
    return 0;
}