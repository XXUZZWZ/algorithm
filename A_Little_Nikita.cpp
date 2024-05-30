#include<bits/stdc++.h>

using namespace std;
 int n,m;
 int res;
 int u;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        res = 0;
        u=0;
        cin>>n>>m;
        if(n>=m&&(n-m)%2==0)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}