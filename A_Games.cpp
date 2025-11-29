#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b,t;
    vector<int> home, guest;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        home.push_back(a);
        guest.push_back(b);
    }
    for (int i = 0; i < n; ++i)
    {
        for (int y = 0; y < n; ++y)
        {
            if (home[i] == guest[y]) ++t;
        }
    }
    cout << t;
    return 0;
}