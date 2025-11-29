#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c,d, calorie=0;
    cin >> a >> b >> c >>d;
    vector<int> v = {a,b,c,d};
    string s;
    cin >>s;
    for (char c : s)
    {
        calorie+= v[c - 49];
    }
    cout << calorie;
    return 0;
}