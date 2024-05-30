#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ct_b=0,ct_w=0;
        string s,res="YES";
        cin>>n;
        cin>>s;
        for(int i = 0;i<n;i++){
            if(s[i]!='W'){
              if(s[i]=='B')ct_b++;
              else ct_w++;
            }
            if(s[i]=='W'){
                if(ct_b!=0&&ct_w==0 || ct_b==0&&ct_w!=0){
                    res = "NO";
                    break;
                }
                else {
                    ct_w = 0;
                    ct_b = 0;
                }
            }
        }
        if(ct_b!=0&&ct_w==0 || ct_b==0&&ct_w!=0){
                    res = "NO";
                }
        cout<<res<<endl;

    }

    return 0;
}