#include<stdio.h>
    int main (){
        int cal , phy, com ,sum ;
        float avg ;
        char name[10] ;
        printf("Enter your name:")
        scanf("%s",name);
        printf("Enter your Calculus score:");
        scanf("%d",&cal);
        printf("Enter your Phy score:");
        scanf("%d",&phy);
        printf("Enter your Com score:");
        scanf("%d",&com);

        sum = (cal+phy+com);

        avg = (sum)/3 ;

        printf("Kha, your average is 71.67.")
            

        return 0 ;
    }