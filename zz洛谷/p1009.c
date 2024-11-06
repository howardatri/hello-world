#include<stdio.h>
long long fac(int n){
    long long i;
    for(i=1;i<n;i++){
        i*=i;
    }
    return i;
}
int main(){
    int n;
    scanf("%d",&n);
    long long sum=0;
    for(int i=1;i<n;i++){
        sum+=fac(i);
    }
printf("%lld",sum);
}