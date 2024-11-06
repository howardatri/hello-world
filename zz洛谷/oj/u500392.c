#include<stdio.h>
int m,n;


int main(){
    scanf("%d %d",&m,&n);
   int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            printf("%d ",a[j][i]);
            if(i==n)printf("\n");
        }
    }
    






}