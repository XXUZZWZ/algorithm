#include <bits/stdc++.h>
using namespace std;
typedef pair<int, char> PII;

void slove()
{
  
    vector<int> a(50, 0);
    int n = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
  
    cin >> s;
   for(int i = 0; i < n;i++){
    for(int j = i;j<n;j++){
        if(a[i]==a[j]&&s[i]!=s[j]){
            cout<<"NO\n";
            return ;
        }
    }
   }

cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
    }

    return 0;
}