#include<stdio.h>
int n,A[100000]={0};
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i/2;j++){
            A[i]+=A[j];
            printf("%d\n",A[i]);
        }
        A[i]++;
        printf("%d\n",A[i]);
    }
   
        printf("%d",A[n]);
        return 0;
    
}