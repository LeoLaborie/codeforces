#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y, k;
    cin >> t;
    int nbr_x,nbr_y, total;
    for (int i = 0; i < t; ++i)
    {
        cin >> x >> y >> k;
        int nbr_x = x / k + (x % k == 0 ? 0 : 1);
        int nbr_y = y / k + (y % k == 0 ? 0 : 1);
        total = max(nbr_x, nbr_y) * 2;
        if (nbr_x>nbr_y) total--; 
        cout << total << endl;
    }

    return 0;
}