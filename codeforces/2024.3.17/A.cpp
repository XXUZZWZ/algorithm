#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;

LL a[35];

void solve()
{
    string s;
    char c;
    vector<int> m1, m2;
    cin >> s >> c;
    int ls = s.size();
    int idx[60];
    int k = 0;
    for (int i = 0; i < ls; i++)
    {
        if (s[i] == c)
            idx[k++] = i;
    }
    for (int i = 0; i < k; i++)
    {
        if (idx[i] % 2 == 0 && (ls - idx[i] - 1) % 2 == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}