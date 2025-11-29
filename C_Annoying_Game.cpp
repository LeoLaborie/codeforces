#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, b_i = 0;
    long long res = 0;
    cin >> n >> k;
    vector<long long> a, b, c, potential_score;
    long long temp, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }
    
    {
        for (int i = 0; i < n; ++i)
        {
            c.push_back(max(((i > 0 ? c[i - 1] : 0) + a[i]), (long long)-1));
        }
        for (int i = 0; i < n; ++i)
        {
            
            if (c[i] == -1)
            {
                if (i > 0)
                {
                    potential_score.push_back(c[i - 1] + b[b_i]);
                    b_i = i;
                }
                else{
                    potential_score.push_back(a[i]+b[i]);
                }
            }
            if (c[i] + b[i] > c[i] + b[b_i])
            {
                b_i = i;
            }
        }
        for (int i = 0; i<potential_score.size(); ++i){
            if (potential_score[i] > res) res = potential_score[i];

        }
        cout << res << endl;
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
