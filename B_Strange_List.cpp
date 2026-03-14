#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, temp;
    unsigned long long total = 0;
    cin >> n >> x;
    vector<unsigned long long> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        total += temp;
        v.push_back(temp);
    }
    int i = 1, indice = 0;
    while (v[indice] % static_cast<unsigned long long>(pow(x, i)) == 0)
    {
        total += v[indice];
        if (indice == v.size() - 1)
        {
            indice = 0;
            i++;
        }
        else
            indice++;
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
