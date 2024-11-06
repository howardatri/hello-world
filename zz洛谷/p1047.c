//noip2015
//令人迷惑的下标
#include<stdio.h>
int l,m,u,v,cnt;
int main(){
    scanf("%d %d",&l,&m);
    int a[100000]={0};
    for(int i=0;i<=l;i++){
        a[i]=1;
    }

    while(m--){
       scanf("%d %d",&u,&v);
       for(int j=u;j<=v;j++){
        a[j]=0;
       }
       
    }

    for(int i=0;i<=l;i++){
        if(a[i]==1)cnt++;
    }
    printf("%d",cnt);

}