#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n , y,  r;
    cin >>n >> y >> r;
    cout << (y/2 + r >= n ? n : y/2 + r) << endl;

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
