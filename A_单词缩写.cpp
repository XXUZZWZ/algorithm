#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>s;
    int n=s.length();
    if(n>10)
    cout<<s[0]<<n-2<<s[n-1]<<endl;
    else
    cout<<s<<endl;
}
    return 0;
}