#include <bits/stdc++.h>
using namespace std;

long long b(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;

    if (k > n - k) k = n - k;

    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}
void solve()
{
    int x, y, c;
    long long total = 0;
    cin >> x >> y;
    c = abs(x - y);
    int i = c/2;
    while (c % 2 == 0 && c != 0)
    {
        
        total += b(abs(x-y),i)/i;
        cout << "b: "<<b(abs(x-y),i)/2<< ". i:" << i << endl;
        i/=2;

        c = c / 2;
    }
    cout << total % 676767677 << endl;
    for (int i = 0; i < x; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < y; i++)
    {
        cout << -1 << " ";
    }
    cout << endl;
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
