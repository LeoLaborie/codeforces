#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, impair = 0, pair = 0;

        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[i] % 2 == 0)
            {
                pair = 1;
            }
            else
            {
                impair = 1;
            }
        }
        if (pair && impair)
            std::sort(num, num + n);
        for (int i = 0; i < n; i++)
        {
            cout << num[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
