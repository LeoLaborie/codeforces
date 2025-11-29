#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> birds;
    int nbr;
    for (int i = 0; i < n; ++i)
    {
        cin >> nbr;
        birds.push_back(nbr);
    }
    int n2;
    cin >> n2;
    int x, y;
    for (int i = 0; i < n2; ++i)
    {
        cin >> x >> y;
        --x;
        if (x == 0)
        {
            birds[x + 1] += birds[x] - y;
            birds[x] = 0;
        }
        else if (x == n )
        {
            birds[x - 1] += y - 1;
            birds[x = 0];
        }
        else
        {
            birds[x + 1] += birds[x] - y;
            birds[x - 1] += y - 1;
            birds[x] = 0;
        }
    }
    for (int i = 0; i < birds.size(); i++){
        cout << birds[i] << endl;
    }

    return 0;
}