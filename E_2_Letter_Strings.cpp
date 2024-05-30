#include<bits/stdc++.h>
using namespace std;
bool complete(string a,string b){
    if(a[1]==b[1]&&a[0]!=b[0])return true;
    if(a[1]!=b[1]&&a[0]==b[0])return true;
    return false;

}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,res = 0;
        cin>>n;
        vector<string> a(n+1);
        for(int i = 0;i<n;i++)cin>>a[i];

        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(complete(a[i],a[j]))res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}