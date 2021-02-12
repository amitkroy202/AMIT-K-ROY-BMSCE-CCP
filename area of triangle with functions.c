#include <stdio.h>
#include <math.h>
float areaoftriangle(int,int,int);

int main()
{
  float a, b, c, area;

  printf("Enter the lengths of sides of a triangle\n");

  scanf("%lf%lf%lf", &a, &b, &c);

  area = areaoftriangle(a, b, c);

  printf("Area of the triangle = %.2lf\n", area);

  return 0;
}

float areaoftriangle(int a, int b, int c);


{


float s=0.0, area=0.0;

  s=(a+b+c)/2;

  area=sqrt(s*(s-a)*(s-b)*(s-c));

  return area;
}







