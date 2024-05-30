#include<bits/stdc++.h>
using namespace std;
const int N = 30010;
int  a[N];
int main(){
   int n,wto=0;
   cin>>n>>wto;
   for(int i = 1;i<=n;i++){
      cin>>a[i];
   }
   for(int i = 1,j=0;j<N;j++,i=i+a[i]){
    if(i==wto){
        cout<<"YES\n";
        return 0;
    }
   }
   cout<<"NO\n";
    return 0;
}