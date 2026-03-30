#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, total = 0;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0 && a[i] != a[i + 1] && gcd(a[i], a[i + 1]) < a[i])
        {
            total++;
            a[i] = gcd(a[i], a[i + 1]);
        }
        else if (i == n - 1 && a[i - 1] != a[i] && gcd(a[i], a[i - 1]) < a[i])
        {
            total++;
            a[i] = gcd(a[i], a[i - 1]);
        }
        else
        {
            int p, n;
            p = gcd(a[i], a[i - 1]);
            n = gcd(a[i], a[i + 1]);
            if (p == a[i] || n == a[i])
            {
                continue;
            }

            else
            {
                if ((p == 1 || n == 1) && a[i] > (n>p?n:p))
                {
                    total++;
                    a[i] = (n>p?n:p);
                }
                else if (p*n/gcd(p,n) < a[i]) {
                    total++;
                    a[i] = p*n/gcd(p,n);
                }
            }
        }
    }

    cout << total << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
