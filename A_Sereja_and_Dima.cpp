#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p1, p2;
    vector<int> cartes;
    cin >> n;
    p1 = 0;
    p2 = 0;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        cartes.push_back(c);
    }
    for (int i = 0; i < n; ++i)
    {
        if (cartes[0] > cartes[n - 1 - i])
        {
            if (i % 2 == 0)
            {
                p1 += cartes[0];
            }
            else
            {
                p2 += cartes[0];
            }
            cartes.erase(cartes.begin());
        }
        else
        {
            if (i % 2 == 0)
            {
                p1 += cartes[n-1-i];
            }
            else
            {
                p2 += cartes[n-1-i];
            }
            cartes.pop_back();
        }
    }
    cout << p1 << " " << p2;
    return 0;
}