
#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>

using namespace std;
 int M,T,res,t[102],w[112],f[112][112];
int main() {
   
    cin >> T >> M;//输入总时间和数量；
    for(int i = 1;i<=M;i++)scanf("%d %d",&t[i],&w[i]);

    for(int i = 1;i<=M;i++){
        for(int j = 1;j<=T;j++){
            f[i][j]=f[i-1][j];
            if(j>=t[i])
            f[i][j] = max(f[i-1][j],f[i-1][j-t[i]]+w[j]);
            res = max(f[i][j],res);
        }
        
    }
    cout<<res;
   

}