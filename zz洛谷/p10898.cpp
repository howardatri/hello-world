#include<bits/stdc++.h>
#define int long long
using namespace std;  
int a,b,c,d,t;
signed main(){
	cin>>a>>b;
//	a=7385137888721,b=10470245;
    c=sqrt(a);
    a-=c;
    c*=2;
	while(1){
		t++;
		if(t==2&&a>0){//判断是否有剩下的2*2可用
			b+=4;
			a--;
			t=0;
		}
		d=2*c+1;
		if(b<d) break;
		b=b-d;
//		b-=2*c-1;
//		if(b<0) break;
		c++;
//		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<t<<endl;
	}
	cout<<c;
}