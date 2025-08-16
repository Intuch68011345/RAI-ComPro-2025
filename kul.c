#include<stdio.h>
    int main (){    
        int cal,phy,com ,sum ;
        float calm,phym,comm;
        float avg,Gpa ;
        char calp,phyp,comp ;
        printf("Calculus score:");
        scanf("%d",&cal);
        printf("Physic score:");
        scanf("%d",&phy);
        printf("compro score:");
        scanf("%d",&com);

        sum = (cal+phy+com);

        avg = (sum)/3 ;
        //cal
        if(cal>=80 ){   
            calp='A';
            calm= 4.0; 
        }else if(cal<80 && cal>=70){
            calp='B';
            calm=3.0;
        }else if(cal<70 && cal>=60){
            calp='C';
            calm=2.0;
        }else if(cal<60 && cal>=50){
            calp='D';
            calm=1.0;
        }else{  
            calp='F';
            calm=0 ;
        }
        //phy
        if(phy>=80 ){   
            phyp='A';
            phym= 4.0; 
        }else if(phy<80 && phy>=70){
            phyp='B';
            phym=3.0;
        }else if(phy<70 && phy>=60){
            phyp='C';
            phym=2.0;
        }else if(phy<60 && phy>=50){
            phyp='D';
            phym=1.0;
        }else{  
            phyp='F';
            phym=0 ;
        }
        //com
        if(com>=80 ){   
            comp='A';
            comm= 4.0; 
        }else if(com<80 && com>=70){
            comp='B';
            comm=3.0;
        }else if(com<70 && com>=60){
            comp='C';
            comm=2.0;
        }else if(com<60 && com>=50){
            comp='D';
            comm=1.0;
        }else{  
            comp='F';
            comm=0.0;
        }

        printf("%-12s%-10s%-10s%s\n","Subject","Score","Grade","Grade");
        printf("--------------------------------------\n");
        printf("%-12s%-10d%-10c%.1f\n","Cal",cal,calp,calm);
        printf("%-12s%-10d%-10c%.1f\n","Physics",phy,phyp,phym);
        printf("%-12s%-10d%-10c%.1f\n","compro",com,comp,comm);


        if(avg>=80){    
            printf("GPA: 4.0");
        }else if(avg>=70){    
            printf("GPA: 3.0");
        }else if(avg>=60){    
            printf("GPA: 2.0");
        }else if(avg>=50){    
            printf("GPA: 1.0");
        }else {
            printf("GPA: 0.0");
        }

        return 0 ;
    }
       