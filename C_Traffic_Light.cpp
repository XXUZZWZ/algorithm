#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    string s;
    char c;
    cin>>t;
    while(t--){
       
        cin>>n>>c;
        cin>>s;
        int res = 0,t=0;
        for(int i = 0;i<2*n;i++){
            if(s[i%n]==c){
                t++;
                continue;
            }
            if(t!=0&&s[i%n]!='g')t++;
            if(s[i%n]=='g'&&t!=0){
                res = max(res,t);
                t=0;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}