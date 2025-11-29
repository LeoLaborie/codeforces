#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ii = 0, iy =0;
    for (int i = 0; i < 5; i++)
    {
        for (int y = 0; y < 5; y++)
        {
            cin >> n;
            if (n)
            {
                ii = i;
                iy = y;
            }
        }
    }

    cout << abs(ii-2)+abs(iy-2);
    return 0;
}