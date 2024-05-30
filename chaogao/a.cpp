#include<iostream>
using namespace std;
int q[100000000];
void qs(int q[],int l,int r){
    int i= l-1,j = r+1,x = q[(l+r)/2];
    if(l>=r)return ;
    while(i<j){
        do i++;while(x>q[i]);
        do j--;while(x<q[i]);
        if(i<j)
        swap(q[i],q[j]);
    }
    qs(q,l,j),qs(q,j+1,r);
}
int main(){
    int n ,k;
    cin>>n>>k;
    for(int i = 0;i<n;i++)cin>>q[i];
    qs(q,0,n-1);
    cout<<q[k-1];
}