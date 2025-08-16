#include<stdio.h>
    int main (){
        int num ;
        printf("Enter your number");
        scanf("%d",&num);
        switch(num<100 && num>0){
            case 1:
                switch(num%2){
                    case 0 :
                    printf("%d is even",num);
                    break ;
                    case 1 :
                    printf("%d is odd",num);
                    break;

                } 
                break;

                case 0 :
            printf("%d is out of rang",num);
            break;
        }

return 0 ;

    }