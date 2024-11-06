#include<stdio.h>
int c,d,f1,f2,f,n,m,grass[2001];
int main(){
    scanf("%d %d %d %d",&c,&f1,&f2,&d);
    for(int i=1;i<=c;i++){
        scanf("%d %d",&n,&m);
        for(int j=n;j<=m;j++){
            grass[j]++;
        }
    }
    f=f1-f2;
    for(int i=d;i>=1;i--){
        f=f-grass[i];
        if(f==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
