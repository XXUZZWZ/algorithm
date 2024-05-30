#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void slove()
{
    int n, m, k;
    cin >> n >> m >> k;
    int b[101], c[101];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
        cin >> c[i];
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i] + c[j] <= k)
            {
                ct++;
            }
        }
    }
    cout << ct << endl;
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
