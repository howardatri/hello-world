#include <iostream>
#include <cmath>
using namespace std;
long long a,b,s[10000005],ans;
int main()
{
	cin>>a>>b;
	for(int i=1;i<=b;i++)
		for(int j=2;i*j<=b;j++) s[i*j]+=i;
	for(int i=a;i<=b;i++) ans+=abs(i-s[i]);//abs绝对值
	cout<<ans;
	return 0;
}