#include<bits/stdc++.h>
using namespace std;
string s;
void slove(){
    int d=0;
    char c;
    set<char> a;
    for(int i = 0;i<s.size();i++){
       a.insert(s[i]);
       if(a.size()>3){
        a.clear();
        d++;
        i--;
       }  
      
    }
    if(a.size())d++;
    
    cout<<d<<endl;
}
int main(){
   int n;
   cin>>n;
   while(n--){
    cin>>s;
    slove();
   }

    return 0;
}