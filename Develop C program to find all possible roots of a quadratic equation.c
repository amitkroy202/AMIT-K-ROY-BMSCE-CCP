#include <stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int a,b,c,D;
    float x,y,imaginary;
    printf("Enter the coefficients of X^2,X and constant term C");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;


    if(D<0)
    {


         printf("Both roots are imaginary");
        x = y = -b / (2 * a);
        imaginary = sqrt(-D) / (2 * a);

        printf("\nTwo distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                x, imaginary, y, imaginary);
    }
        else if(D==0){
        printf("Both Roots are equal");
        x=-b/(2.0*a);
        printf("\nRoot is %f ",x);
         }
       else if(D>0){
        printf("Roots are real and distinct");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\nRoots are: %f,%f",x,y);

     }




}
