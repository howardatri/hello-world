#include<stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
const int NR=5*1e5;
int a[NR+10],b[NR+10],c[NR+10];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        c[n-i+1]=a[i];
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);

    }
    int cnt1=0,cnt2=1;
    for(int i=1;i<=n;i++){
        cnt1+=a[i]!=b[i];
        cnt2+=c[i]!=b[i];
    }
    printf("%d\n",min(cnt1,cnt2));
}