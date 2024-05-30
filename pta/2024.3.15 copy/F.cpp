#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7; 
const int N = 100010;

LL a[100000];

void solve()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int ct;
    for(int i = 0;i<n;i++){
        for(int j= i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(a[i]<a[j]&&a[j]<a[k]&&i<j&&j<k){
                    ct++;
                    ct%=mod;
                }
            }
        }
    }
    cout<<ct;
}

int main()
{
    
        solve();
    

    return 0;
}