#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int cnt=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
              cnt++;
            printf("%02d",cnt);

        }
        printf("\n");
    }
}
//第二个循环j=i和 j<n-i效果一样
//for里是循环完再更新