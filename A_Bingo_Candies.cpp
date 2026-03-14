#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,temp;
    map<int,int> m;
    cin >> n;
    for (int i = 0; i<n*n; ++i){
        cin >> temp;
        m[temp] +=1;
    }

    int max=0;
    for (auto p : m){
        if (p.second>max) max= p.second;
    }
    cout << (max>n*n-n?"NO":"YES") << endl;

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
