#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,e, total;
    total = 0;
    cin >> n >> t;
    for (int i = 0; i < n ; ++i){
        cin >> e;
        if (e > t) total = total+2;
        else ++total;
    }
    cout << total;
    return 0;
}