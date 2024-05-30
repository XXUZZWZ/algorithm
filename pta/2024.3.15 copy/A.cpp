#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
long long A[1000][1000];
int S[1000][1000];
const int mod = 998224353;
int t;  
int k;
long long f(long long m, long long n)
{A[m][n]%=mod;
    if (m == 0 || n == 0)
    {
        return A[m][n] = 0;
    }
    if (A[m - 1][n] != 0 && A[m][n - 1] != 0 && A[m - 1][n - 1] != 0)
    {
        A[m][n] = A[m - 1][n] + A[m][n - 1] + A[m - 1][n - 1];
        return A[m][n];
    }
    return A[m][n] = f(m - 1, n) + f(m, n - 1) + f(m - 1, n - 1);
}
void slove()
{
    long long sum = 0;
  
    cin >> k;
     for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            f(i, j);
        }
    }
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {   S[i][j]%=mod;
            S[i][j] += A[i][j];
        }
    }
    if(k==0){cout<<S[0]<<endl;return;}
    cout<<S[k+1][k+1]-S[k-1][k-1]<<endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        slove();
    }

    return 0;
}