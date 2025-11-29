#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i_t = 0; i_t < t; i_t++)
    {
        int n, k, one_in_last = 0, ans = 0;
        cin >> n >> k;
        one_in_last= k+1;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                
                one_in_last++;
            }
            if (s[i] == '1')
            {
                if (one_in_last < k)
                {
                    one_in_last = 1;
                }
                else
                {
                    ans++;
                    one_in_last = 1;
                }
            }
        }
        cout << ans << endl;
    }
}