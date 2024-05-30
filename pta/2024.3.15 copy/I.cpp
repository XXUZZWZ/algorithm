#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
const int n = 1e8;
int x;
int head;
int net[n];
int cren[n];
int old[n];
void ins(int a){
if(x==0){head = a;return ;}
old[a]=x-1;
cren[x]=a;
net[a]=x++;
}
bool find(int a){

}

void slove()
{
    int n, q, m;
    cin >> n >> q >> m;
    int x, y;
    while (m--)
    {
        cin >> x >> y;
    }
    int l, r;
    while (q--)
    {
        cin >> l >> r;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    slove();

    return 0;
}