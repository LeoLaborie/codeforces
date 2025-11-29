#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        string l1;
        string l2;
        cin >> l1;
        cin >> l2;
        int yes = 1;

        for (int y = 0; y < n; y++){
            // cout << l1[y] << endl;
            if (l1[y] == '1' && l2[y] == '1'){
                cout << "NO" << endl;
                yes = 0;
                break;
            }
        }
        
        if (yes==1){
            cout << "YES" << endl;
        }

    }
    
    return 0;
}