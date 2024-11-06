#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int id[2000001];
int main(){
    int n,m,sum;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
    scanf("%d",&id[i]);}
    for(int i=1;i<=m;i++){
        scanf("%d",&sum);
        printf("%d\n",id[sum]);
    }
}
// #include<cstdio>
// int a[2000001];
// int main()
// {
// 	int n,m,sum;
// 	scanf("%d %d",&n,&m);
// 	for(int i=1;i<=n;i++)
// 		scanf("%d",&a[i]);
// 	for(int i=1;i<=m;i++)
// 	{
// 		scanf("%d",&sum);
// 		printf("%d\n",a[sum]);
// 	}
// }