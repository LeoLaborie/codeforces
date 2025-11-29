#include <bits/stdc++.h>

using namespace std;


int main()
{
    unsigned int n,m,a;
    cin >> n>>m>>a;
    
    // int area_a = a*a;
    unsigned int nbr_n = n/a + (n%a==0 ? 0 : 1);
    unsigned int nbr_m = m/a + (m%a==0 ? 0 : 1);
    unsigned long long total = nbr_n * nbr_m;
    cout << total;
    return 0;
}