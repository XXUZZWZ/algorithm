#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;

void solve()
{
    int n;int a[55];
    int max=0;
    int min = 1000000001;
    int t;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>t;
        if(t>max)max=t;
        if(t<min)min=t;
    }
    cout<<max-min<<endl;
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