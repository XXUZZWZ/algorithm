#include<bits/stdc++.h>
using namespace std;
double a,b;
struct car{
    double x ,y,v;
    double get_time(){
        return sqrt((x-a)*(x-a)+(y-b)*(y-b))/v;
    }
} c;

int main(){
     cin>>a>>b;
     int n;
     cin>>n;
     double res = 100000;
     while(n--){
        cin>>c.x>>c.y>>c.v;
        res = min(res,c.get_time());
     }
     printf("%.20lf",res);

    return 0;
}