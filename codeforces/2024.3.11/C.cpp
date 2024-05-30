#include <iostream>
#include <cstring>
using namespace std;
void cmp(char a[], int n)
{
    int ret = 0;
    while (n--)
    {
        if ((a[n] == 'e' && a[n - 1] == 'i' && a[n - 2] == 'p') || (a[n] == 'p' && a[n - 1] == 'a' && a[n - 2] == 'm'))
        {
            ret++;
        }
    }
    cout << ret<<endl;
}
void slove()
{
    char a[1000001];
    int n;
    cin >> n;
    for(int i=0;i<n;i++)cin>>a[i];
    cmp(a,n);
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
        slove();

    return 0;
}