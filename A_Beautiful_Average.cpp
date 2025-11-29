#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, max = 0, num;
    cin >> t;
    
    for (int i=0; i<t; i++)
    {
        cin >> n;
        max=0;
        for (int y =0; y<n;++y)
        {
            cin >> num;
            if (num>max) max = num;
        }
        cout << max <<endl;
    }
    return 0;
}