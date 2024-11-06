#include<stdio.h>
//友情链接b2105矩阵乘法
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]+b[i][j]);
            if(j<m-1)printf(" ");
        }
        if(i<n)printf("\n");
    }
}
