#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<int,int> m;
    for (int i = 0; i < n; i++){
        m[i%k] += s[i];
    }
    bool yes=1;
    for (auto elem : m) {
        if (elem.second%2!=0){
            yes=0;
        }
    }
    cout << (yes ? "YES" : "NO") << endl;

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
