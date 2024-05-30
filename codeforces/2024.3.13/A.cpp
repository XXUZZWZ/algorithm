#include <iostream>
#include <cstring>
#include<math.h>
using namespace std;
void slove()
{
    char q[100000];
    int  n =0;
    cin >> q;
    int l =strlen(q);
    int m=pow(10,l-1);
   for(int i =0;i<l;i++){
    n=n*10+(int)(q[i]-'0');
   }
    cout<<n-m<<endl;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
   cin >> t;
    for (int i = 0; i < t; i++)
    {
        slove();
    }

    return 0;
}