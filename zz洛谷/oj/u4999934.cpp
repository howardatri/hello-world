#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";//对应字符。
void f(int x,int m){
	if(x/m) f(x/m,m);//继续递归。
	cout<<c[x%m];//倒序输出。
}
int main(){
	int x,m;
	cin>>x>>m;//输入。
	f(x,m);//递归。
	return 0;
}