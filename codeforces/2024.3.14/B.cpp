#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
void slove()
{
    int n, a[2000000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 0;
    for (int i = n - 1; i > 0; i--)
    {
        while (a[i] <= a[i - 1])
        {
            if ((a[0] == 0 && a[1] == 0))
            {
                cout << -1 << '\n';
                return;
            }
            a[i - 1] /= 2;
            ct++;
            if (i - 1 > 0)
            {
                if (a[i - 1] == 0)
                {
                    cout << -1 << '\n';
                    return;
                }
            }
        }
    }
    cout << ct << '\n';
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