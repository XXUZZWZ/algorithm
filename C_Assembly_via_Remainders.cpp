#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 ;
typedef long long LL;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printf("501 ");
        LL res = 501;
        int temp = 0;
        for(int i = 1;i<n;i++){
            cin>>temp;
            res +=temp;
            printf("%lld ",res); 
        }
        cout<<endl;
    }

    return 0;
}