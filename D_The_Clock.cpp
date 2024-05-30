#include<bits/stdc++.h>
using namespace std;
int h,m,sp;
bool is_huiw(int h,int m){
    return h/10==m%10&&h%10==m/10;
}
long long  ct_huiw(){
    int st = h*60+m,ct = 0;
    unordered_map<int,int> mp;
    for(int i = st;;i+=sp){
        int _h_ = i/60;
        int _m_ = i%60;
        _h_%=24;
        if(mp[_h_*60+_m_] ==1)break;
        mp[_h_*60+_m_] =1;
        if(is_huiw(_h_,_m_))ct++;
    }
    return ct;
}
int main(){
    int t;
    cin>>t;
    while(t--){
      
        scanf("%02d:%02d %d",&h,&m,&sp);
        long long res = ct_huiw();
        cout<<res<<endl;
    }

    return 0;
}