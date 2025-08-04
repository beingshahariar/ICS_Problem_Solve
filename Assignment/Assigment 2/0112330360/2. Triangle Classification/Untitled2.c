#include <stdio.h>
#include <math.h>

int main (){

float x1,y1,x2,y2,x3,y3;
float slide1,slide2,slide3;

printf ("Enter the variable of x1 and y1:");
scanf("%f %f",&x1,&y1);

printf("Enter the variable of x2 and y2:");
scanf ("%f %f",&x2,&y2);

printf ("Enter the variable of x3 and y3:");
scanf ("%f %f",&x3,&y3);

slide1= round (sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
slide2= round (sqrt (((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2))));
slide3= round (sqrt (((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3))));

if (slide1+slide2>slide3){
 
 if (slide1==slide2 && slide2==slide3 && slide1==slide3){
    printf ("This triangle is an Equilateral.\n");
}
 else if (slide1==slide2 || slide1==slide3 || slide2==slide3){
    printf ("This triangle is an Isosceles.\n");
}
 else {
    printf ("This triangle is a Scalene.\n");
}
}

else {
    printf ("This triangle is an Invalid.\n");
}

return 0;

}
