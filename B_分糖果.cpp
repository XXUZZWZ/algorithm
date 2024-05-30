#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {   
        int n,t1,a[3]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>t1;
            a[t1]++;
        }
        if((a[1]+a[2]*2)%2==0&&(a[1]%2==0&&a[1]!=0||a[2]%2==0&&a[2]!=0) )cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
}