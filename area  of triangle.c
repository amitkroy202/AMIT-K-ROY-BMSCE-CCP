#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("ENTER THE VALUE OF SIDES OF TRIANGLE:");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle=%f",area);
    return 0;
}
