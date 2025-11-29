#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{

    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // If both numbers are equal
    if (a == b)
        return a;

    // If a is greater
    if (a > b)
        return gcd(a - b, b);

    // If b is greater
    return gcd(a, b - a);
}

int main()
{
    int t;
    cin >> t;

    int n, num, trouve = 0;
    for (int it = 0; it < t; it++)
    {
        trouve = 0;
        cin >> n;
        vector<int> v = {};
        for (int i = 0; i < n; i++)
        {
            cin >> num;

            v.push_back(num);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> num;
        }

        for (int j = 1; j < n; j++)
        {
            // cout << "x j" << x<<" " <<j;
            if (trouve ==1)
                break;
            else
                for (int i = 0; i < j; i++)
                {
                    
                    if (gcd(v[i], v[j]) > 1)
                    {
                        trouve = 1;
                        break;
                    }
                    else if (v[i]%2==1 && v[j]%2==1){
                        continue;
                    }
                    else if (gcd(v[i] + 1, v[j]) > 1 || gcd(v[i], v[j] + 1) > 1)
                    {
                        trouve = 2;
                        
                    }
                }
        }

        if (trouve == 0)
            trouve = 3;
        cout << trouve - 1 << endl;
    }
    return 0;
}
