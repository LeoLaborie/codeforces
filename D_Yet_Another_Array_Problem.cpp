#include <bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b)
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

    while (t--)
    {
        int n;
        unsigned long long x = (unsigned long long)pow(10, 18) + 1;

        cin >> n;
        vector<unsigned long long> num;
        unsigned long long temp;
        for (int i = 0; i < n; i++)
        {

            cin >> temp;
            num.push_back(temp);
        }

        for (int i = n - 1; i >= 0; i--)
        {
            // for (int j = 0; j < num.size(); j++)
            // {
            //     if (i != j && num[i] >= num[j] && num[i] % num[j] == 0)
            //     {
            //         num.erase(num.begin() + i);
            //         break; 
            //     }
            // }

            if (num[i] % 2 == 1)
            {
                x = 2;
                break;
            }
        }

        

        for (int i = 0; i < num.size(); i++)
        {
            if (x == 2 || x==3)
                break;
  
            for (unsigned long long j = 2; j <= (unsigned long long)min(num[i], x); j++)
            {
                if ((unsigned long long)gcd(num[i], j) == 1)
                {
                    x = (unsigned long long)min(j, x);
                    break;
                }
            }
        }
        if (x == (unsigned long long)pow(10, 18) + 1)
            cout << -1 << endl;
        else
            cout << x << endl;
    }

    return 0;
}
