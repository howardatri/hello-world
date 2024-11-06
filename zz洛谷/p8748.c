#include<stdio.h>
long long a;
int main(){
    scanf("%lld",&a);
    int day=24*60*60,hour=60*60,min=60;
    a/=1000;
    int th=(a%day)/hour;
    int tm=(a%day%hour)/min;
    int ts=a%day%min;//也可直接%60
printf("%02d:%02d:%02d",th,tm,ts);

}