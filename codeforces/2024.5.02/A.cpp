#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;

void solve()
{
   int x,y,a,b;
   cin>>x>>y;
   if(x%y!=0&&y%x!=0){cout<<0<<' '<<0<<endl;return ;}
   if(y<x)swap(x,y);
   if(y%(y/x)==0)cout<<y/(y/x)/x<<' '<<y/x<<endl;
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