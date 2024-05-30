#include<bits/stdc++.h>
using namespace std;
const int N = 60;

int main(){
    int t;
    
    cin>>t;
    while(t--){
        string s = "YES";
        int n,a[N];
        memset(a,0,sizeof a);
        cin>>n;
        for(int i = 1;i<=n;i++)cin>>a[i];
        for(int i = 1;i<=n;i++){
          if(i%2!=0){
             if((a[1]%2)!=(a[i]%2)){
                s = "NO";
                break;
             }
          }
          if(i%2==0){
            if((a[2]%2)!=(a[i]%2)){
                s = "NO";
                break;
             }
          }
        }
     
        cout<<s<<endl;
    }

    return 0;
}