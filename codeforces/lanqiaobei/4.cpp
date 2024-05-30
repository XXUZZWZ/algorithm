#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
const int INF = 0x3f3f3f3f;
int a[N], b[N];
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i] >> b[i];

  int r = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0, m2 = INF, m1 = 0;
  for (int i = 0; i < n; i++)
  {

    r = a[i] / b[i];
    for (int j = r; j > 0; j--)
    {
      if (a[i] / j != b[i])
        break;
      r4 = j;
    }
    m1 = max(m1, r4);
    if(a[i]/m1!=b[i])m1++;
    for (int j = r; j <= a[i]; j++)
    {
      if (a[i] / j != b[i])
        break;
      r3 = j;
    }
    m2 = min(m2, r3);
    
    //cout<<m2<<"----"<<endl;
    
    r1 = r3, r2 = r4;
  }
  if (m1 == 0)
    m1++;
  cout << m1 << ' ' << m2;

  return 0;
}