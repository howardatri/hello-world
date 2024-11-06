#include<stdio.h>
#define long long int
int a,b;
int f(int x,int y,int k){
    int cnt=0;
    while(x!=y){
        x/=k;
        y/=k;
        cnt++;

    }
    return cnt-1;
}
int min(int a,int b){
if(a>b)return b;
if(a<=b)return a;
else return 0;
}
signed main(){
    scanf("%lld%lld",&a,&b);
    a--;
    printf("%lld",min(f(a,b,2),f(a,b,5)));
    return 0;
}