#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
  int t, q, n;
  cin >> t;
  while (t--)
  {
    int op = -1, c = 0;
    cin >> n >> q;
    memset(a, 0, sizeof a);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    long long res = 0, odd = 0, ln = 0;

    for (int i = 0; i < n; i++)
    {
      res += a[i];
      if (a[i] % 2 == 0)
        odd++;
      else
        ln++;
    }
    for (int i = 0; i < q; i++)
    {
      cin >> op >> c;
      if (c % 2 == 0 && op == 0)
        res += odd * c, odd = odd;
      else if (c % 2 != 0 && op == 0)
        res += odd * c, ln += odd, odd = 0;
      else if (c % 2 == 0 && op == 1)
        res += ln * c, ln = ln;
      else if (c % 2 != 0 && op == 1)
        res += ln * c, odd += ln, ln = 0;
        
      cout << res << endl;
    }
    
  }

  return 0;
}