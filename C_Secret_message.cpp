#include <bits/stdc++.h>
using namespace std;
vector<int> PrimeFactors(int n)
{
    vector<int> r;
    for (int i = 2; i * i <= n; i += 1 + (i > 2))
    {
        while ((n % i) == 0)
        {
            r.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
        r.push_back(n);
    return r;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    vector<int> facteur_premier = PrimeFactors(n);
    sort(facteur_premier.begin(), facteur_premier.end());
    if (facteur_premier[0] != 1)
    {
        facteur_premier.insert(facteur_premier.begin(), 1);
    }
    for (auto nb : facteur_premier)
    {
        for (int i =0; i<n; i=i+nb)
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
