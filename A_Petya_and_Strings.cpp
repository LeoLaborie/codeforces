#include <bits/stdc++.h>

using namespace std;

int main()
{
    string l1, l2;
    cin >> l1 >> l2;
    transform(l1.begin(), l1.end(), l1.begin(), ::toupper);
    transform(l2.begin(), l2.end(), l2.begin(), ::toupper);
    if (l1 == l2) cout << 0;
    if (l1 < l2) cout << -1;
    if (l1 > l2) cout << 1;

    return 0;
}