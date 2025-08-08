#include<stdio.h>
int main(){
    int num ,i ,sum=1 ;
    printf("Input number :");
    scanf("%d",&num);
    for(i=num;i>1;i--)
    {
        sum=sum*i;
    }
    printf("factorial of %d is %d\n",num,sum);




    return 0 ;
}