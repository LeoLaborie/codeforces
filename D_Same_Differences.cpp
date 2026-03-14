#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long n, total = 0;
    // vector<int> v, traite;
    map<int,unsigned long long> m;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        // v.push_back(temp-i);
        m[temp-i] +=1;
    }
    
    for (auto p : m){
   
        if(p.second > 1) total += (p.second-1)*p.second / 2;

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
