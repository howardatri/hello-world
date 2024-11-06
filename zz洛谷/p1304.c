#include<stdio.h>
#include<string.h>
#include<math.h>

//了解打表
/*
打表虽然很赖皮,而且基本都是非正解,但是这种办法能让我们在省选中拿到一些会超时或者会超空间的一些数据点。

来自洛谷——省选斗兽场

同样，这题对于看不懂第二种优化的童鞋们可以使用打表法。打表法，就是把答案装进一个数组里面，做题的时候，再从数组里拿出来。
#include <cstdio>
using namespace std;
bool isprime(int x){    //判断质数，不再解释
    for(int i = 2; i < x; i ++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    freopen("text.out", "w", stdout);   //文件输入输出
    printf("{");                        //数组前面的大括号
    for(int i = 1; i <= 10000; i ++){   //枚举
        if(isprime(i)){                 //是质数
            printf("%d,", i);          //文件中写上
        }
    }
    printf("}");                        //后面的大括号
    return 0;

上面事打表，下面是题解

#include <cstdio>
#include <cstring>
using namespace std;
bool isprime[10005];
int primes[] = {/就是上面那一张表，防抄袭省略一下/};
int main(){
    memset(isprime, false, sizeof(isprime));
    int n;
    int len = sizeof(primes) / sizeof(int) - 1;
    for(int i = 1; i <= len; i ++){
        isprime[primes[i]] = true;
    }								//初始化数组
    scanf("%d", &n);
    for(int i = 4; i <= n; i += 2){	//考虑所有奇数
        for(int j = 1; j <= len; j ++){	//枚举所有质数
            if(isprime[i - primes[j]]){	//判断是否可行
                printf("%d=%d+%d\n", i, primes[j], i - primes[j]);	//输出
                break;	//这里我们的代码是按照字典排序进行枚举，找到直接下一个数就可以了
            }
        }
    }
    return 0;
}


}


*/
#include<stdio.h>
int a[10001];
int ss(int n)//判断是不是质数的函数
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0) return 1;//出现能整除的情况，说明此数不是质数，返回跳出函数
    }
    return 0;//如果成功从循环中出来，返回0，说明此数是质数
} 
void num(int n)//此函数就是整道题的重点了，用来判断输出
{
    printf("%d=",n);
    int i;
    for(i=2;i<n;i++)//穷举加数
    {
        if(ss(i)==0&&ss(n-i)==0)//判断两个加数是否为质数 
                {printf("%d+%d\n",i,n-i); break;}//题目输出第一个加数最小的情况，那就发现成立的情况就及时跳出
    }
}
int main()//主函数只要穷举4~n之间的数就行了
{
    int i,n;
    scanf("%d",&n);
    for(i=4;i<=n;i+=2)
    {
        num(i);//调用
        }
        return 0;
}