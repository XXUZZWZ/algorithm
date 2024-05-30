#include<iostream>
#include<cmath>
using namespace std;
const int N = 5001;
int f[N];
int main(){
    int n,a[N],res=0;
    cin>>n;
    for(int i = 1;i<=n;i++)cin>>a[i];
    for(int i = 1;i<=n;i++){
        f[i]=1;
        for(int k = 1;k<i;k++)
        if(a[i]>a[k]){
            f[i]=max(f[i],f[k]+1);
        }
        res=max(res,f[i]);
    }
    cout<<res;

}