#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[35];

void solve()
{
    int h,t;
    scanf("%02d:%02d",&h,&t);
    if(h>=12){
        if(h>12)h%=12;
        
        printf("%02d:%02d PM\n",h,t);
    }
    else {
        if(h==0)h=12;
        printf("%02d:%02d AM\n",h,t);
    }


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