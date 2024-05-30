#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;

void solve()
{
    int  a,b,c;
    bool f=0;
    cin>>a>>b>>c;
     if((a+c)%(2*b)==0&&(a+c)>=2*b)f = 1;
     if((b-c+b)%a==0&&(b-c+b)!=0&&a!=1&&(b-c+b)>=a)f = 1;
     if(a==1&&abs(b-c)<abs(b-1))f=1;
     if((b-a+b)%c==0&&(b-a+b)!=0&&(b-a+b)>=c)f = 1;
    
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    
    
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