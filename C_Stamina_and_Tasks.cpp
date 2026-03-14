#include <bits/stdc++.h>


using namespace std;
double round1e7(double x) {
    return std::round(x * 1e7) / 1e7;
}

void solve()
{
    int n, temp;
    cin >> n;
    vector<long double> c;
    vector<long double> p;
    long double total, temp2;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        c.push_back(temp);
        cin >> temp2;
        p.push_back(temp2 / 100);
    }
    total = c[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {

        if ((1 - p[i]) * total + c[i] > total)
        {
            total = round1e7((1 - p[i]) * total + c[i]);
        }
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
