#include<stdio.h>
int main (){    
    int cal,phy,com,sum ;
    float avg ;
    char name[10] ;
    printf("Enter your name \n");
    scanf("%s",name);
    printf("Cal score \n");
    scanf("%d",&cal);
    printf("Phy score \n");
    scanf("%d",&phy);
    printf("Com score \n");
    scanf("%d",&com);
        sum = cal+phy+com ;
        avg = (sum)/3 ;
        printf("%s,your average is %.2f.",name,avg);

        if(avg>=80){    
            printf("You got grade A.");
        }else if(avg>=70){  
            printf("You got grade B .");
        }else if(avg>=60){  
            printf("You got grade C .");
        }
         else if(avg>=70){  
            printf("You got grade D .");
            }
            else{   
                 printf("You got grade F .");
            }





















    return 0;
}