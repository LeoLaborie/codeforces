#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,max=0,total,temp;
    cin >> n;
    total=n;
    for (int i = 0; i<n; i++){
        cin >> temp;
        if (temp >= max){
            max = temp;
        }
        else {
            total--;
        }

    }

    cout << total << endl;
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
