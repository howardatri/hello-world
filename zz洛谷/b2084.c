//质因数分解
//技巧：两指数，原数字÷小的遍历的即可
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            printf("%d",n/i);
            break;
        }
    }
}