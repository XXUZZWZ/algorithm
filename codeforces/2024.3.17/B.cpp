#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;
int l,r,a;
LL f(int x){
 return x/a+x%a;
}
void solve()
{
    LL max1= 0;
    cin>>l>>r>>a;
    LL ll,rr;
    ll=l/a;
    rr= r/a;
    if(rr-ll>=1){
     max1=max(rr-1+a-1,rr+r%a);}
    else {
        max1=rr+r%a;
    }
    cout<<max1<<endl;
   
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}