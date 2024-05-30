#include<bits/stdc++.h>
using namespace std;
string k_b,w;
int find(char c){
    for(int i = 0;i<k_b.size();i++){
        if(k_b[i]==c)return i;
    }
    return -1;
}
void slove(){
    int idx=0,res=0;
    idx = find(w[0]);
   for(int i =1;i<w.size();i++){
     res+=abs(find(w[i])-idx);
     idx = find(w[i]);
   }
   cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
        cin>>k_b>>w;
        slove();
    }
    return 0;
}