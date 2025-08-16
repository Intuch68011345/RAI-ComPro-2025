#include<stdio.h>
int main (){
    char Name[10];
    int cal , phy ,com ,sum ;
    float avg ;
    printf("Enter your Name ");
    scanf("%s",Name);
    printf("Your cal score ");
    scanf("%d",&cal);
    printf("Your phy score");
    scanf("%d",&phy);
    printf("Your com scpre ");
    scanf("%d",&com);

    sum = (cal+phy+com) ;
   
    avg = sum/3 ;
    printf("%s, your average is %.2f",Name,avg);

    if(avg>=80){
        printf("You got grade A ");
    }
    else if(avg<80 && avg>=70){
        printf("You got grade B ");
    }
    else if(avg<70 && avg>=60){
        printf("You got grade c ");
    }
    else if(avg<60 && avg>=50){
        printf("You got grade D ");
    }
    else{
        printf("You got grade F ");
    }

        








    return 0 ;
}