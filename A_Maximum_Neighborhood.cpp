#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, somme = 0    ;
    cin >> n;
    if (n >= 5){
        somme += n*n-1 + n*n -n + n*n - n - 1 + n*n - n - 2 + n*n - 2*n - 1;
    }
    if (n >= 3 && n < 5){
        // somme += (n*n )+ (n*n -1) + (n*n -2 )+ (n*n -n-1)  ;
        somme += 4*n*n - n - 4  ;
    }
    if (n==1) somme =1;
    if (n==2) somme = 9;

    cout << somme<< endl;

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
