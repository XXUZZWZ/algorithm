#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){

        int n,c ,d;vector<long long> a,sa;
        cin>>n>>c>>d;
        for(int i = 0;i<n*n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ssa[502][502]={{0}};
        ssa[0][0]=a[0];
        for(int i = 1;i<n;i++){
            ssa[0][i]=ssa[0][i-1]+d;
        }
        for(int i = 1;i<n;i++){
            for(int j = 0;j<n;j++){
                ssa[i][j]=ssa[i-1][j]+c;
            }
        }
        for(int i = 0;i<n;i++){
            for(int j= 0;j<n;j++){
                int t1 = 0;
                sa[t1++]=ssa[i][j];
            }
        }
        sort(sa.begin(),sa.end());
        bool f=1;
        for(int i = 0;i<n*n;i++){
            if(a[i]!=sa[i]){
                cout<<"NO\n";
                f=0;
                break;
            }
        }
        if(f)cout<<"YES\n";
    }
    return 0;
}