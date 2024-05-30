#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N];
int main(){
  int t,n,max_1=0,max_2=0,x=0,y = 0;
  cin>>t;
  max_1 = 0,max_2 = 0;
  while(t--){
    cin>>n;
    for(int i = 0;i<n;i++){
      cin>>a[i ];
    }
    sort(a,a+n);
    //cout<<max_1<<' '<<max_2<<endl;
    max_1 = a[n-1];
    max_2 = a[n-2];
    if(max_1 - max_2>=2)cout<<"NO\n";
    else cout<<"YES\n";

  }

    return 0;
}