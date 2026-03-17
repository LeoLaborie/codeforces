#include <bits/stdc++.h>
using namespace std;
long long min(long long a, long long b)
{
    return (a < b ? a : b);
}
void solve()
{
    long long a, b, c, m, ab, ac, bc, abc, meeting_every, score_a = 0, score_b = 0, score_c = 0;
    cin >> a >> b >> c >> m;

    ab = (a % b == 0 || b % a == 0 ? (b > a ? b : a) : b * a);
    ac = (a % c == 0 || c % a == 0 ? (c > a ? c : a) : c * a);
    bc = (b % c == 0 || c % b == 0 ? (c > b ? c : b) : c * b);
    abc = a * b * c;

    // cout << (a % c == 0 || c % a == 0) << endl;
    if (a % b == 0 || b % a == 0)
    {
        abc = abc / min(a, b);
    }
    if (a % c == 0 || c % a == 0)
    {
        abc = abc / min(a, c);
    }
    if (c % b == 0 || b % c == 0)
    {
        abc = abc / min(c, b);
    }

    // cout << "ab: " << m/ab << endl;
    // cout << "ac: " << m/ac << endl;
    // cout << "bc: " << m/bc << endl;
    // cout << "abc: " << m/abc << endl;
    score_a += m / abc * 2 + (m / ab - m / abc) * 3 + (m / ac - m / abc) * 3 + ((m / a + m / abc - m / ab - m / ac)) * 6;
    score_b += m / abc * 2 + (m / ab - m / abc) * 3 + (m / bc - m / abc) * 3 + (m / b + m / abc - m / ab - m / bc) * 6;
    score_c += m / abc * 2 + (m / ac - m / abc ) * 3 + (m / bc - m / abc) * 3 + (m / c + m / abc - m / ac - m / bc) * 6;

    // cout << score_a << " " << score_b << " " << score_c << endl;
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
