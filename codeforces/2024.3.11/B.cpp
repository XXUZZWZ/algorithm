#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void slove()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, a[200001];
    int d;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n - 1; i++)
    {
        
        
            d = a[i];
            a[i + 1] -= 2 * d;
            a[i + 2] -= 1 * d;
        
        if (a[i+1]<0||a[i+2]<0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    // for(int i=1;i<=n;i++){
    if (a[n - 1] != 0  || a[n] != 0)
    {
        cout << "NO" << endl;
        return;
    }
    // }
    cout << "YES" << endl;
    return;
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
