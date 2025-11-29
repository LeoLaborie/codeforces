#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i_t = 0; i_t < t; i_t++)
    {
        int n, num, prev, odd, ans = 0, maxi = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num > maxi)
            {
                maxi = num;
            }
            if (i % 2 == 1)
            {
                num = maxi;
            }
            v.push_back(num);
        }

        if (v[1] <= v[0])
        {
            ans += v[0] - v[1] + 1;
            v[0] = v[1] - 1;
        }

        for (int i = 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i - 1] <= v[i])
                {
                    ans += v[i] - v[i - 1] + 1;
                    v[i] = v[i - 1] - 1;
                }
            }

        }
        cout << ans << endl;
    }
    return 0;
}