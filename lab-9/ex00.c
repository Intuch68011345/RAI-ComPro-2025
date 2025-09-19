#include<stdio.h>
#include<math.h>
float tri_area( float side1,float side2,float side3  );
int main()
{
float side1,side2,side3,ans ;
printf ("Enter side1 : ");
scanf ("%f",&side1);
printf ("Enter side2 : ");
scanf ("%f",&side2);
printf ("Enter side3 : ");
scanf ("%f",&side3);
ans = tri_area(side1, side2, side3);
printf("area =%.2f\n ",ans);



return 0;
}
float tri_area( float side1,float side2,float side3 )
{
float s,ans;
s = (side1+side2+side3)/2;
ans = sqrt(s*(s-side1)*(s-side2)*(s-side3));
return(ans);
}

