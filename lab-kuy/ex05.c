#include<stdio.h>
int main(){ 
    int hight,radius;
    float volume ;
    printf("Enter hight");
    scanf("%d",&hight);
    printf("Enter your radius");
    scanf("%d",&radius);

    volume = (3.14*radius*radius*hight);

    if (volume>260){    
        printf("This cone is perfect for Supun project");
    }else{  
        printf("This cone is not  perfect for Supun project");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}