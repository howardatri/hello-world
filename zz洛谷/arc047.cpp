#include<bits/stdc++.h>
using namespace std;
int n,l,ans,sum;
int main() {
	cin>>n>>l;
	for(int i=1; i<=n; i++) {
		char x;
		cin>>x;
		sum=x=='+'?sum+1:sum-1;
		sum==l?sum=0,ans++:sum=sum;
	}
	cout<<ans<<endl;
	return 0;
}