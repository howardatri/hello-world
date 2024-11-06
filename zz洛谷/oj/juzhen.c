#include<stdio.h>
//3/5,加个空格4/5 傻逼，只用每个后面都加就ac

int main(void){
    int n,m;
scanf("%d %d",&m,&n);
long long arr[m][n];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++){
    arr[i][j]=0;
}

for(int i=0;i<m;i++)
for(int j=0;j<n;j++){
    scanf("%lld",&arr[i][j]);
}


for(int j=0;j<n;j++){
for(int i=0;i<m;i++){
printf("%lld ",arr[i][j]);



}
if(j<n-1)
printf("\n");
}
}