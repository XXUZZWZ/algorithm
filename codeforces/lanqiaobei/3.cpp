#include <bits/stdc++.h>
using namespace std;
int main()
{
double sum = 11625907.5798;
double s = 0;
double  p = 23333333;
int res ;
for(int i  = 0;i<=23333333/2;i++){
    s=0;
    s+=i*(i/p)*(log2(p/i))+(p-i)*((p-i)/p)*(log2(p/(p-i)));
  
  if(fabs(s-sum)<0.01) 
  {res = i;break;}
}
cout<<res;

  return 0;
}