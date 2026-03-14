#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, max = 0, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (i % 2 == 0 && max < temp)
        {
            // cout << temp << " ";
            max = temp;
        }
    }

    cout << max << endl;
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
