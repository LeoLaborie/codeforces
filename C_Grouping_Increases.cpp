#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, nb, last_s = pow(10, 6), last_t = pow(10, 6), score = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nb;
        if (nb > last_t && nb > last_s)
        {
            if (last_t < last_s)
            {
                last_t = nb;
            }
            else
            {
                last_s = nb;
            }
            score++;
        }
        else if (nb > last_s)
        {
            last_t = nb;
        }
        else if (nb > last_t)
        {
            last_s = nb;
        }
        else {
            if (last_t < last_s)
            {
                last_t = nb;
            }
            else
            {
                last_s = nb;
            }
        }

    }

    cout << score << endl;
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
