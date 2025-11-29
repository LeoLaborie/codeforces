#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char c = s[0];
    string a = "abcdefghijklmnopqrstuvwxyz";
    string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == c) s[0] = b[i] ;
    }
    cout << s;
    return 0;
}