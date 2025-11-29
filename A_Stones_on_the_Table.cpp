#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nbr=0;
    string s;
    cin>>s;
    char prev = s[0];
    for (int i = 1; i < n; ++i)
    {
        if (prev == s[i]){
            ++nbr;

        }
        else {
            prev = s[i];
        }
    }
    cout << nbr;
    return 0;
}