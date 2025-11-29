#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, maxi = 0, nbr_0=0, temp; 
    unsigned long long somme = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 0) nbr_0++;
        else somme += temp-1;
        if (temp > maxi) maxi = temp;
    }

    cout << n - nbr_0 - (somme >= n-1 ? 0 : n-somme-1) << endl;
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
