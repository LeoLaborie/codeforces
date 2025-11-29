#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<set<char>> liste;
    string temp;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        set<char> passwordset(temp.begin(), temp.end());

        liste.push_back(passwordset);
    }
    set<char> emptySet;
    map<char, set<char>> dico;
    dico[' '] = emptySet;

    for (set<char> &password : liste)
    {
        for (char c : password)
        {
            dico[c].insert(password.begin(), password.end());
        }
    }

    char alphabet[26];
    for (int i = 0; i < 26; ++i)
    {
        alphabet[i] = char(i + 97);
    }

    for (int i = 0; i < 26; ++i)
    {

        for (char x : dico[alphabet[i]])
        {
            dico[x].insert(dico[alphabet[i]].begin(), dico[alphabet[i]].end());
        }
    }

    int compteur = 0;
    for (int i = 0; i < 26; ++i)
    {
        if (alphabet[i] != ' ' && dico[alphabet[i]].size() > 0)
        {
            for (char x : dico[alphabet[i]])
            {
                alphabet[x - 97] = ' ';
            }
            compteur++;
        }
    }

    cout << compteur;
    return 0;
}
