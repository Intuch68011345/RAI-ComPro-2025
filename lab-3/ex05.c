#include<stdio.h>
int main (){
    int hight , radius ;
    float volume ;
    printf("Enter cone hight:");
    scanf("%d",&hight);
    printf("Enter cone base radius:");
    scanf("%d",&radius);

    
    volume = (3.14*radius*radius*hight)/3 ;

    printf("Cone volume %.2f\n",volume);

    if(volume>260){
        printf("This cone is perfect for Supun project");
    }
    else{   
        printf("This cone is not fit for this project");
    }










    return 0 ;
}