#include<stdio.h>


int main(){
    int A ;
    

    printf("Enter total minutes: ");
    scanf("%d",&A);
    int hour = A / 60;
    int nmin = A % 60;
    printf("%d minutes is %d hour(s) and %d minute",A , hour , nmin);







    return 0 ;
}