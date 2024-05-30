#include<iostream>
using namespace std;
const int N = 1e5+1;
int A[N],B[N],C[N];
int main(){
    int n ;
    cin>>n;
    for(int i = 1;i<=n;i++)cin>>A[i];
    for(int i = 1;i<=n;i++)cin>>B[i];
    for(int i = 1;i<=n;i++)cin>>C[i];
    
    int sa[N],sc[N];
    for(int i = 1;i<=n;i++)sa[A[i]]++;
    for(int i = 1;i<=n;i++)sc[C[i]]++;
    for(int i = 1;i<=n;i++)sa[i]+=sa[i-1];
    for(int i = 1;i<=n;i++)sc[i]+=sc[i-1];
    cout<<sc[n]*sa[n];
    return 0;
}