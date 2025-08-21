#include<stdio.h>
int main(){
    int num1 ;
    printf("Enter number ");
    scanf("%d",&num1);

    switch(num1<100 && num1>0){ 
        case 1 :
            switch(num1%2==0){   
                case 1 :
                    printf("%d is even",num1);
                    break;
                case 0 : 
                    printf("%d is odd",num1);
                    break;
            
            } break ;
                
            case 0 :
            printf("Hee");
            break;
    }
        














    return 0 ;
}