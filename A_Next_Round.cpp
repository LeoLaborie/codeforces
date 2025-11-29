#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, t;
    cin >> n;
    cin >> a;
    --a;
    t = 0;
    int p;
    int score_a;
    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        if ((a >= i && p > 0) || (a < i && score_a == p && p > 0))
            t++;
        if (a == i)
        {
            score_a = p;
        }
    }
    cout << t;
    return 0;
}