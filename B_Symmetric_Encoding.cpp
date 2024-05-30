#include<bits/stdc++.h>
using namespace std;
const int N = 500010;
struct inst{
    int l,r;
}l[N];
bool jiao(inst _1_,inst _2_){
    if(_1_.r<_2_.l||_2_.r<_1_.l)return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        scanf("%d %d",&l[i].l,&l[i].r);
    }
    int ct = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(jiao(l[i],l[j]))ct++;
        }
    }
    cout<<ct;
    return 0;
}