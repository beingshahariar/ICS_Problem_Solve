#include <stdio.h>
int main ()
{

  float radius;
  float circumference;
  float area;

  printf("Enter the radius of the circle;\n");
  scanf ("%f",&radius);

  circumference = 2*3.1416*radius;
  area =3.1416*radius*radius;

  printf ("circumference:%f\n",circumference);
  printf ("Area: %f\n",area);

  return 0;

}
