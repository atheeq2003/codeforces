//A. Watermelon
#include<stdio.h>
int main()
{
    int kilos,half;
    scanf("%d",&kilos);
    if(kilos / 2 == 1){
        printf("NO");
    }else if(kilos % 2 == 0){
        printf("YES");
    }else{
        printf("NO");
    }
   return 0;
}