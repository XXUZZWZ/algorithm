#include<bits/stdc++.h>
using namespace std;
int h,m,sp;
bool is_huiw(int h,int m){
    return h/10==m%10&&h%10==m/10;
}
int ct_huiw(){
    int st = h*60+m,ct = 0;
    for(int i = st;i<48;st+=sp){
        int _h_ = i/60;
        int _m_ = i%60;
        _h_%=24;
        if(is_huiw(_h_,_m_))ct++;
    }
    return ct;
}
int main(){
    int t;
    cin>>t;
    while(t--){
      
        scanf("%02d:%02d %d",&h,&m,&sp);
        cout<<ct_huiw()<<endl;
    }

    return 0;
}