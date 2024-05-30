#include<bits/stdc++.h>
using namespace std;
void slove(string &s){
   int n = s.size(),c = 0,c1=0,c0 =0;
   bool a[110] = {0};
   for(int i =0;i<n;i++){
      if(s[i]=='0')c0++;
      else c1++;
   }
   c = min(c1,c0);
   if(c%2!=0)cout<<"DA\n";
   else cout<<"NET\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        slove(s);
    }
    return 0;
}