//找规律及排列组合
#include<bits/stdc++.h>//懒人专用万能头
using namespace std;
#define ll long long
ll i,ans=1,k,h,num;//记得开long long,int会炸；ans为总方案数
ll c(char lx,int n,int m)//计算排列组合，lx=='a'为排列，lx=='c'为组合
{
    ll s=1;
    for(int x=n;x>n-m;x--)s*=x;//根据排列公式计算A(a,b)
    if(lx=='c')for(int x=m;x>0;x--)s/=x;//如果是组合就要除以m!
    return s;
}
int main()
{
    cin>>num>>k>>h;
    ans*=c('c',k,num);//选择摆哪一些行: C(k,num)
    ans*=c('a',k,num);//列的摆法: A(k,num)
    for(int x=1;x<=h;x++){
		cin>>i;//i为该颜色木牛流马的个数
		ans*=c('c',i,k);//从k个木牛流马中选择i个涂颜色
		k-=i;//一定要记得减去i，这i个不能再涂了！！ 
	}
    cout<<ans;//输出答案 
    return 0;
}

//另一种
// #include<bits/stdc++.h>
// using namespace std;
// int n,k,h;
// long long ans=1,c;//十年OI一场空，不开long long见祖宗 
// int main(){
// 	cin>>n>>k>>h;
// 	//有人说这里要加一个特判，但其实不需要，因为当k>n时，后面的（n-i+1）就会有一个变成0，那么答案就一定是0了 
// 	for(int i=1;i<=k;i++){
// 		ans*=(n-i+1)*(n-i+1);  
// 	}
// 	for(int i=1;i<=h;i++){
// 		cin>>c;
// 		for(int j=1;j<=c;j++)ans/=j;
// 	}
// 	cout<<ans;
// 	return 0;//记得养成好习惯 
// }