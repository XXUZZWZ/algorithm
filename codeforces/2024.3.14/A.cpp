#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
void slove()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a >= x && b >= y)
    {
        cout << "YES" << endl;
    }
    else if (a >= x && b < y && y - b <= c)
    {
        cout << "YES" << endl;
    }
    else if (a < x && b >= y && x - a <= c)
    {
        cout << "YES" << endl;
    }
    else if (a < x && b < y && y - b + x - a <= c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO\n";
    }
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