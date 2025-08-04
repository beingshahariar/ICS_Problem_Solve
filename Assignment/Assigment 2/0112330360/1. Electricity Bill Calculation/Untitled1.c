#include <stdio.h>

int main (){

float units,totalbill,surcharge;

printf ("Enter the number of units consumed:");
scanf ("%f",&units);

if (units <= 50){
    totalbill=(units*0.50);
}
else if (units <=150){
    totalbill=(50*0.50)+((units-50)*0.75);
}
else if (units<=250){
    totalbill=(50*0.50)+(100*0.75)+((units-150)*1.20);
}
else {
    totalbill=(50*0.50)+(100*0.75)+(100*1.20)+((units-250)*1.50);
}

surcharge=0.20*totalbill;
totalbill=totalbill+surcharge;

printf("Total Bill:%.2f taka.\n",totalbill);

return 0;
}
