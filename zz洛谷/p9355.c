#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        long long n,m;
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",2*n*m-m-n);
    }
}