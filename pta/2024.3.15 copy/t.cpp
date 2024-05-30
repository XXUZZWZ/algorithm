#include<iostream>
using namespace std;
const int N=100010;
int f(long long u)
{
	long long cnt=0;
	while(u){
		if(u==2) return cnt+1;
		if(u%2==0) {
			u/=2;  // 先将u除以2
			cnt++;  // 然后再将计数器加1
			if(u==2) return cnt+1;
		}
		else return 0;
	}
	return cnt;
}

int gcd(long long a,long long b)
{
	return a>0?gcd(b%a,a):b;
}
int main()
{//cout<<f(4);
	int n;
	cin>>n;
	
	while(n--)
	{
		long long a,b,x,y;
		cin>>a>>b>>x>>y;
		long long ss=gcd(a,b);
		a/=ss,b/=ss;
		//cout<<a<<" "<<b;
		if(f(a+b)&&a%2==1&&b%2==1) cout<<f(a+b)+1<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}