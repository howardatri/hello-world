#include<stdio.h>
int s,v;
int main(){
    scanf("%d %d",&s,&v);
    int min;
    if(s%v==0){//7:59开始，这里时间少一分钟

    min=s/v+9;}else
    min=s/v+10;
int stdh=7,stdm=59;//出发时间
while(min!=0){
    if(stdm!=0){
        stdm--;
    }else{
        if(stdh!=0){
        stdh--;
        stdm=59;}
        else{
            stdh=23;
            stdm=59;
        }
    }
    min--;
}


      printf("%02d:%02d",stdh,stdm);

}