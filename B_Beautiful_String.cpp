    #include <bits/stdc++.h>
    using namespace std;
     
    bool isPalindrome(const string &s) {
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    }
     
    bool isNonDecreasing(const string &s) {
        for (int i = 1; i < (int)s.size(); i++)
            if (s[i-1] > s[i]) return false;
        return true;
    }
     
    int main() {
        int t; cin >> t;
        while (t--) {
            int n; string s;
            cin >> n >> s;
            bool found = false;
     
            // iterate over all subsets
            for (int mask = 0; mask < (1 << n); mask++) {
                string p, x;
                vector<int> indices;
     
                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        p.push_back(s[i]);
                        indices.push_back(i + 1);
                    } else {
                        x.push_back(s[i]);
                    }
                }
     
                if (isNonDecreasing(p) && isPalindrome(x)) {
                    cout << (int)indices.size() << endl;
                    for (int i = 0; i < (int)indices.size(); i++)
                        cout << indices[i] << (i + 1 == (int)indices.size() ? "" : " ");
                    cout << endl;
                    found = true;
                    break;
                }
            }
     
            if (!found) cout << -1 << endl;
        }
    }