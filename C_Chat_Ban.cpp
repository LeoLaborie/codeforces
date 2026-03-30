#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long k, x, l, nbr_emotes;
    cin >> k >> x;
    l = ceil((-1 + sqrt(1 + 8 * x)) * 0.5);
    if (l > k && l < 2 * k - 1)
    {
        nbr_emotes = ceil((k * k + k) / 2);
        l = k;
        x -= nbr_emotes;
        // cout << x << " " << k<<"debug: " << -sqrt((k - 0.5) * (k - 0.5) - 2 * x) + k - 0.5 << endl;
        l += ceil(-sqrt((k - 0.5) * (k - 0.5) - 2 * x) + k - 0.5);
    }
    if (l > 2 * k - 1)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        cout << l << endl;
    }
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
