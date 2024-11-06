#include<stdio.h>
#include<stdlib.h>
int compa(const void*a,const void*b){
    int x = *(const int *)a;
    int y = *(const int *)b;
    
    if(x>y)return 1;
   if(x<y)return -1;
   return 0;
}
double sum =0;
int main(){
    int n;
    int a[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);

    }
qsort(a,n,sizeof(int),compa);

for(int i=1;i<n-1;i++){

    sum+=a[i];
}

double e=sum/(n-2);
printf("%.2lf",e);
}