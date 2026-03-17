#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,temp;
    set<int> s;
    cin >> n;
    cin >> x;
    for (int i = 0; i<x; i++){
        cin >> temp;
        s.insert(temp);
    }
    cin >> x;
    for (int i = 0; i<x; i++){
        cin >> temp;
        s.insert(temp);
    }
    if (s.size() == n){
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
