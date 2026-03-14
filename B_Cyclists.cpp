#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, p, m, temp, total = 0;
    cin >> n >> k >> p >> m;
    p--;
    k--;
    vector<int> cards;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        cards.push_back(temp);
    }

    while (m >= cards[p])
    {
        
        if (p <= k)
        {
            total += 1;
            m -= cards[p];
            cards.push_back(cards[p]);
            cards.erase(cards.begin() + p);
            p = n-1;
        }
        else
        {
            int lowest_price = 6000;
            int indice = 0;
            for (int i = 0; i <= k; i++)
            {
                if (cards[i] < lowest_price)
                {
                    lowest_price = cards[i];
                    indice = i;
                }
            }
            // cout << lowest_price << " "<<indice<< endl;
            m -= cards[indice];
            cards.push_back(cards[indice]);
            cards.erase(cards.begin() + indice);
            p--;
        }
        // cout <<p << " " << total << " "<< m<<endl;
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
