#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
void slove()
{
    char q[200000];
    char rem[4];
    cin >> q;
    int l = strlen(q);
    int ct = 0;
    int day = 0;
    for (int i = 0; i < l; i++)
    {
        if (ct < 3)
        {
            for (int j = 0; j < 3; j++)
            {
                if (q[i] == rem[j])
                {
                    continue;
                }
                else
                {
                    rem[ct] = q[i];
                    
                }
            }
        }
            if (ct > 3)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (q[i] == rem[j])
                    {
                        continue;
                    }
                    day++;
                    ct = 0;
                    rem[0] = '\0';
                    rem[1] = '\0';
                    rem[2] = '\0';
                }
            }
         ct++;
        }
        cout << day << endl;
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