#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int nbr_a = 0;
    for (int i = 0; i <n; ++i){
        if (s[i] == 'A') nbr_a++;
    }
    if (n-nbr_a > nbr_a) cout << "Danik";
    else if (nbr_a == n-nbr_a) cout << "Friendship";
    else cout << "Anton";
    return 0;
}