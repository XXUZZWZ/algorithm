#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int n, x, y = 0, max_res = 0;
    cin >> n;
    while (n--)
    {   y = 0;
        max_res = 0;
        cin >> x;
        for (int i = 1; i < x; i++)
        {
            if (max_res < gcd(x, i) + i)
            {
                max_res = gcd(x, i) + i;
                y = i;
            }
        }
        cout << y << endl;
    }

    return 0;
}
