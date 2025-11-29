#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string last;
    cin >> last;
    string current;
    int t = 0;
    for (int i =1; i<n; i++)
    {
        cin >>current;
        if (last != current){
            last = current;
            t++;
        }
    }
    cout << t+1;
    
    return 0;
}