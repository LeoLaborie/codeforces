#include <bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b ? a : b); }
int min(int a, int b) { return (a > b ? b : a); }
int indice_moins(int a, int b, int n) { return (a - b < 0 ? n + a - b : a - b); }
void solve()
{
    int n;
    cin >> n;
    vector<int> h;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        h.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        vector<int> l(n), r(n);
        long long res = 0;
        int indice;
        int valeur_max = h[i];
        for (int j = 1; j < n; j++)
        {
            indice = (i + j) % n;
            valeur_max = r[indice] = max(valeur_max, h[indice_moins(indice,1,n)]);
        }
        valeur_max = h[indice_moins(i,1,n)];
        for (int j = 1; j < n; j++)
        {
            indice = indice_moins(i, j, n);
            valeur_max = l[indice] = max(valeur_max, h[indice]);
            
        }
        l[i] = 0;
        r[i] = 0;

        // if (n==6 && i == 4){
        //     cout << endl << "l: ";
        //     for (int a : l) {
        //         cout << a << " ";
        //     }
        //     cout << endl;
        //     cout << "r: ";
        //     for (int a : r) {
        //         cout << a << " ";
        //     }
        //     cout << endl;
        // }
        for (int j = 0; j < n; j++)
        {
            res += min(l[j], r[j]);
        }
        cout << res << " ";
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
