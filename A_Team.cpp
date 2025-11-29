#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a,b,c, t=0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >>a>>b>>c;
        if ((a&&b)||(a&&c)||(b&&c)) t++;
    }
    cout << t;

    return 0;
}