#include <iostream>
#include<cstring>

using namespace std;
int h, l;

void slove(const char a[][8]) {
    int b, c, hh, ll;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (a[i][j] == '#') {
                c++;
                hh = i;
                ll = j;
            }
        }
        if (c == 1 && b == 2) {
            h = hh, l = ll;
            return;
        }
        b = c;
        c = 0;
    }

}

int main() {
    int n;
    //yonglishu
    cin >> n;
    for (int i = 0; i < n; i++) {
        char q[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> q[i][j];
            }
        }
        slove(q);
        cout << h+1 <<' '<< l+1 << endl;
    }


    return 0;
}