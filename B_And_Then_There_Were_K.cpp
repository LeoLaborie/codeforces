#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t, n;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        int puissance = 0;
        while ((long long)pow(2, puissance) < n)
        {
            puissance++;
        }

        if ((long long)pow(2, puissance) == n)
            cout << (long long)n - 1 << endl;
        else
            cout << (long long)pow(2, puissance - 1) - 1 << endl;
    }
    return 0;
}