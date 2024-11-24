#include<bits/stdc++.h>
//acwing 94

using namespace std;
const int N=20;
int n,st[N];//记录数是否访问过选过 0未考虑1选2不选
void dfs(int x){//x当前枚举到哪个位置
if(x>n){
    for(int i=1;i<=n;i++){
        if(st[i]==1){
            printf("%d ",i);
        }
    }printf("\n");
    return ;
}
//想倒序输出选和不选改个位置就行

//选
st[x]=1;
dfs(x+1);
st[x]=0;//恢复现场 用完回溯 dui//可有可无，便于理解


//不选
st[x]=2;
dfs(x+1);
st[x]=0;//恢复

}

int main(){
    scanf("%d",&n);
    dfs(1);
return 0;

}

