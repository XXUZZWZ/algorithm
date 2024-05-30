#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 200010;

void solve()
{
    map<char,int>mp;
    int n;
    int ans=0;
    int ct=0;
    string s;
    cin>>s;
    for(int i =0;i<s.size();i++){
        mp[s[i]]++;
        ct++;
        if(mp[s[i]]==2){
            mp.clear();
            ans+=ct-2;
            ct=0;
        }
    }
    ans+=ct;
    cout<<ans<<endl;
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