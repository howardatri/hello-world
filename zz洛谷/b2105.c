#include<stdio.h>
int n,m,k;
//开ll 为数组赋初值
int main(){
    scanf("%d %d %d",&n,&m,&k);
   long long A[110][110],B[110][110],C[110][110];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&B[i][j]);
        }
    }
    
     for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            C[i][j]=0;
        }
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            for(int l=0;l<m;l++){
                C[i][j]+=A[i][l]*B[l][j];
            }
        }
    }

for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf("%d",C[i][j]);
            if(j<k-1)printf(" ");
     
        }
        if(i<n)printf("\n");
    }
}