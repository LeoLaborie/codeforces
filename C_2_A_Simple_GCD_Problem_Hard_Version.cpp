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
        if (i == 0 && gcd(a[i], a[i + 1]) < a[i] && gcd(a[i], a[i + 1]) <= b[i])
        {
            total++;
            a[i] = gcd(a[i], a[i + 1]);
        }
        else if (i == 0 && a[i] + a[i + 1] <= b[i])
        {
            total++;
            a[i] = a[i] + a[i + 1];
        }
        else if (i == n - 1 && gcd(a[i], a[i - 1]) < a[i] && gcd(a[i], a[i - 1]) <= b[i])
        {
            total++;
            a[i] = gcd(a[i], a[i - 1]);
        }
        else if (i == n - 1 && a[i] + a[i - 1] <= b[i])
        {
            total++;
            a[i] = a[i] + a[i - 1];
        }
        else
        {
            int p, n;
            p = gcd(a[i], a[i - 1]);
            n = gcd(a[i], a[i + 1]);
            if ((p == a[i] || n == a[i]) && p * n <= b[i] && p * n != a[i])
            {
                total++;
                a[i] = p * n / gcd(p, n);
            }
            // else if ((p == a[i] || n == a[i]) && p * n <= b[i] && p * n != a[i])
            // {
            //     total++;
            //     if (a[i] == 1 && p * n - 1 <= b[i])
            //         a[i] = p * n - 1;
            // }

            else
            {
                if ((p == 1 || n == 1) && a[i] != (n > p ? n : p) && (n > p ? n : p) <= b[i])
                {
                    total++;
                    a[i] = (n > p ? n : p);
                }
                else if (p * n / gcd(p, n) <= b[i])
                {
                    if (p * n / gcd(p, n) != a[i])
                    {
                        total++;
                        a[i] = p * n / gcd(p, n);
                    }
                    else if (2 * p * n / gcd(p, n) <= b[i]&& 2 * p * n / gcd(p, n) != a[i])
                    {
                        total++;
                        a[i] = 2 * p * n / gcd(p, n);
                    }
                }
            }
        }
        for (int nb : a)
        {
            cout << nb << " ";
        }
        cout << endl;
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
