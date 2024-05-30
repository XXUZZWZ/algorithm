#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n_1=0,n_2=0;
        cin>>n_1>>n_2;
        int  res = (n_1+n_2*4+14)/15;
        cout<<max(res,(n_2+1)/2)<<endl;

    }
    return 0;
}