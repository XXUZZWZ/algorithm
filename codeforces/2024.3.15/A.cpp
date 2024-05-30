#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int A[200];
int B[200];
void slove()
{
    int x, y, a, b;
    cin >> x >> y;
    if (x > y)
    {
        cout << 0 << ' ' << 0 << endl;
    }
    if (x == y)
    {
        cout << 1 << ' ' << 1 << endl;
    }
    if (x < y)
    {
        if (y % x == 0)
            cout << A[y / x] << ' ' << B[y / x] << endl;
        else
            cout << 0 << ' ' << 0 << endl;
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    for (int i = 0; i < 100; i++)
    {
        for (int k = 0; k < 100; k++)
        {
            int l = pow(i, k);
            if (l <= 100)
            {
                A[l] = k;
                B[l] = i;
            }
            else
                break;
        }
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        slove();
    }

    return 0;
}