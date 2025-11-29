#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, nbr_crime = 0, nbr_policier=0;
    cin >> n;
    
    int temp;
    for (int i = 0; i<n; ++i){
        cin >> temp;
        if (temp == -1 && nbr_policier>0) --nbr_policier;
        else if (temp > 0)
        {
            nbr_policier+=temp;
        }
        else nbr_crime++;
         
    }
    cout << nbr_crime;
    
    return 0;
}