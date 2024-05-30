#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        if(i<=(n+1)/2)
        cout<<max(i,(n-i)*2)<<endl;
        else
        {
            int j = n-i+1;
            cout<<max(j,(n-j)*2)<<endl;
        }
       
    }
    
    return 0;
}