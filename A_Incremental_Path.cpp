#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, temp;
    cin >> n >> m;
    string commandes;
    cin >> commandes;
    map<int, int> blacks;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        blacks[temp] = 1;
    }

    int pointeur = 1;
    for (char c : commandes)
    {
        
        if (c == 'A')
        {
            pointeur++;
            blacks[pointeur] = 1;
        }
        else
        {
            pointeur++;
            while (blacks[pointeur])
            {
                pointeur++;
            }

            blacks[pointeur] = 1;
            while (blacks[pointeur])
            {
                pointeur++;
            }
            blacks.erase(pointeur);
            
        }
    }

    cout << blacks.size() << endl;
    for (auto p : blacks)
    {
        cout << p.first << " ";
    }
    cout << endl;
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
