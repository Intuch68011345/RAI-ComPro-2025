#include<stdio.h>
int main(){  
    int num1 ;
    printf("Enter your number ");
    scanf("%d",&num1);

    if(num1 < 100 && num1>0){   
        if(num1%2==0){   
            printf("even");

        }else{    
            printf("odd");
        }
    }else{  
        printf("not Hee");
    }








return 0 ;
}