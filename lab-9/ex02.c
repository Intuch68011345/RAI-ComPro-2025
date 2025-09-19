#include<stdio.h>

float prime(int num1,int num2)  
{   
    float ans1 ;
    for(num1;num1 <= num2;num1++){  
        if (num1 %3!=0 && num1%2!=0 ||num1 ==2)
        {   
            printf("%d ",num1);
        }
    }
}
   int main()
   {    
    int num1,num2;

    printf("Enter the start and end numbers:");
    scanf("%d %d",&num1,&num2);

    printf("the prime numbers within the intervals are : \n");
    prime(num1,num2);
   }