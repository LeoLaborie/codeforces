#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, score = 0;
    cin >> n;
    map<int, int> m;
    int temp;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    int nbr_4=0, nbr_2=0, nbr_1=0;
    for (auto key : m)
    {
        if (key.second % 4 == 0) nbr_4++;
        else if (key.second % 2 == 0) nbr_2++ ;
        else if (key.second % 2 == 1) nbr_1++;
    }


    score+=nbr_1;
    score += nbr_4*2 - (nbr_1>1?0:(nbr_4%2)*2);
    score+=nbr_2*2;

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
