// #include<stdio.h>
// #include<stdlib.h>


// int main(void){
  
//     // int n;
//     // scanf("%d",&n);

//     // int fishes[n];
//     // int m=0;
//     // for(int i=1;i<=n;i++){
//     //   scanf("%d",&fishes[i]);

//     // }
//     // for(int i=1;i<=n;i++){
//     //   for(int j=1;j<=i;j++){
//     //       if(fishes[j]<fishes[i])
//     //       m++;
//     //   }
//     //   printf("%d ",m);
//     //   m=0;
//     // }
    
// printf("%d%d",'A'+'0'+1);
//     }
    
    #include<stdio.h>
#define ll long long
ll i,ans=1,k,h,num;
ll c(char lx,int n,int m){
    ll s=1;
    for(int x=n;x>n-m;x--)s*=x;
    if(lx=='c')for(int x=m;x>0;x--)s/=x;
    return s;
}int main(){
    scanf("%lld %lld %lld",&num,&k,&h);
    ans*=c('c',k,num);
    ans*=c('a',k,num);
    for(int x=1;x<=h;x++){
        scanf("%lld",&i);
        ans*=c('c',i,k);
        k-=i;
    }
    printf("%lld",ans);
}


