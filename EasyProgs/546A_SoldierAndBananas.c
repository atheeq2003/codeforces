//A. Soldier and Bananas
#include<stdio.h>
int main()
{
    int k,n,w,x;
    scanf("%d%d%d",&k,&n,&w);
    x = k * w * (w+1) / 2;
    if(n > x){
        printf("0");
    }else{
        printf("%d",x-n);
    }
}