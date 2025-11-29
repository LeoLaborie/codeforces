#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pos = 0;
    string s,t;
    cin >> s >> t;
    for (char ct : t){
        if (ct == s[pos]){
            pos++;
        }
    }
    cout << pos+1;
    return 0;
}