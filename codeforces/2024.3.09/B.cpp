#include <iostream>
#include<set>
using namespace std;
int main(){

  int n;//ex num;
  cin>>n;
  for(int i = 0;i<n;i++){
      set<int> arr;//int set;
      int len=0;
      int j=0;
      int t=0;//temp;
      //record original num;
      cin>>len;
      while(j<len){
          cin>>t;
          arr.insert(t);
          j++;
      }
      int sum=arr.size();
      if((len-sum)%2!=0)sum--;
      printf("%d\n",sum);
  }
}