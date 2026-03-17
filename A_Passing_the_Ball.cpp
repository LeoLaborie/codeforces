#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, total=1;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i<n-1;i++){
        if (s[i] == 'R' && s[i+1] == 'L')
        {
            cout << i+(n-i%2?1:0)+1 << endl;
            break;
        }
    }

    // cout << total << endl;
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
