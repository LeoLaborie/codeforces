#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    cin >> name;
    int c_d = 0;
    for (int i = 0; i < name.size(); ++i)
    {
        int in = 0;
        for (int y = 0; y < i; ++y)
        {
            if (name[y] == name[i])
                in = 1;
        }
        if (in == 0)
            ++c_d;
    }

    // cout << c_d;
    (c_d % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!");
}