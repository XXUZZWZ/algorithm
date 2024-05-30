#include <iostream>
#include <string.h>
using namespace std;
const int N = 10010;
void slove()
{
    string s, t;
    cin >> s >> t;
    int sa=0,so=0,ta=0,to=0;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='a'){sa++;}
        else so++;
    }
    for(int i =0;i<t.size();i++){
        if(t[i]=='a')ta++;
        else to++;
    }
    if(so==0&&to==0&&ta<=1){cout<<1<<endl;}
    else if(ta>0&&so==0){cout<<-1<<endl;}
    else if(sa-ta>0&&ta>0){cout<<-1<<endl;}
    else {cout<<sa*(sa+1)/2.0+1<<endl;}
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        slove();
    }
}
/*
aa
hxoagyhp
a
afzw
aaaaa
iuakffa
aaaaa
a
aaaaaa
avnkafaa
aaaa
axs
aaaaaaaaa
bpea
aaaaaaaaaa
ahlbzcw
aaaaaaaaaa
pfrawvys
aaaaaaaa
al
aaaaaaaaaa
ad
aaaaaaaaa
vgaamtplb
aa
ahqk
aaaaa
wdpauljfjh
aaaa
yjtsami
aaaaaa
lgxna
aa
ima
aaaaaaaa
jaaa
aaaa
mqfnnbat
aaaa
yawiszx
aaaaaa
ga
aa
cjtrask
aaaaa
mnaet
aaaaaaaa
jljavfckua
aaa
jaroiz
aaaaa
amuxi
aaaa
yuqwlpua
aaa
hza
aaaaaaaa
aa
aaaa
aw
aaaaaaaaaa
vapmuimfu
aaaaaaaa
a
aa
doa
a
anckt
aaaaaa...
*/