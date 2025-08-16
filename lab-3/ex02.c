#include<stdio.h>
int main(){
    int num ;
    printf("Enter your number ");
    scanf("%d",&num);
        if(num<100 && num>0){
                if(num%2==0){
                    printf("%d is even",num);
                }
                else{
                    printf("%d is odd",num);
                }
        }
        else{
            printf("%d is out of rang",num);
    
    }
    













    return 0 ;
}