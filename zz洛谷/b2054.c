#include<stdio.h>
int n;
double sum=0;
int main(){
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        sum+=a[i];
    }

printf("%.2lf",sum/n);

}