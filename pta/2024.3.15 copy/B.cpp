#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int A[27][27];
void maked(){
    int ct=0;
    for(int i =0;i<26;i++){
        for(int j=0;j<26;j++){
            if(j==i)continue;
            ct++;
            A[i][j]=ct;
        }
    }
}
void slove()
{
    char a[2];
    cin>>a;
    cout<<A[a[0]-'a'][a[1]-'a']<<'\n';
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    maked();
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        slove();
    }

    return 0;
}