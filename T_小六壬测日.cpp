#include<bits/stdc++.h>
using namespace std;
pair<int,string> lucy_map[24]={{1,"大安"},{2,"留连"},{3,"速喜"},{4,"赤口"},{5,"小吉"},{6,"空亡"}};
map<int,int> old_hour_map={{23,1},{1,1},{2,2},{3,2},{4,3},{5,3},{6,4},{7,4},{8,5},{9,5},{10,6},{11,6},{12,7} ,{13,7},{14,8},{15,8},{16,9},{17,9},{18,10},{19,10},{20,11},{21,11},{22,12},{23,12}};
string day_lucy_degree(int month,int day,int hour){
  if(hour%2==0)return "左右皆可，无需测量";
  int old_hour=old_hour_map[hour];
  int sum_month_and_day_and_old_hour=month+day+old_hour;
  int test_num = sum_month_and_day_and_old_hour - 2;
  if(test_num%6==0)return lucy_map[test_num/6].second+"，需测量";
  if(test_num%6!=0)return lucy_map[test_num%6].second+"，需测量";
  return "bug";
}
int main(){
  int month,day,hour,old_hour;
  cin>>month>>day>>hour;
  cout<<"测算结果："<<day_lucy_degree(month,day,hour)<<endl;

  
  

}