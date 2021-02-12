#include<stdio.h>
#include<conio.h>
#define pi 3.14

int main()
{
    float r,area,circ;

    printf("\n Enter the radius of circle:");
    scanf("%f",&r);
    area=pi*(r*r);
    printf("\n Area=%f",area);
    circ=2*(pi*r);
    printf("\n circumference=%f",circ);
    getch();
    return 0;
}
