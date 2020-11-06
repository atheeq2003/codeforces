//A. Team
#include<stdio.h>
int main()
{
    int a,b,c,i,probs,r=0;
    scanf("%d",&probs);
    for(i=1;i<=probs;i++){
       scanf("%d %d %d",&a,&b,&c);
       if(a+b+c >= 2){
          r++;
       }   
    }
    printf("%d",r);
    return 0;
}
