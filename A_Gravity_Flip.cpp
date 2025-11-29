#include <bits/stdc++.h>

using namespace std;
bool comp(int a, int b) {
    return a < b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> l; 
    for (int i = 0; i<n; ++i){
        int temp;
        cin >>temp;
        l.push_back(temp);
    }
    sort(l.begin(), l.end(), comp);

    for(int i = 0; i<n; ++i) cout << l[i] << " ";
    return 0;
}