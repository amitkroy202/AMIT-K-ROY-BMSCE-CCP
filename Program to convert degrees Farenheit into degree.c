#include <stdio.h>

int main()

{

float celsius, fahrenheit;

printf("Enter temperature in Fahrenheit: ");

scanf("%f", &fahrenheit);

celsius = (0.56) * (fahrenheit - 32);

printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

return 0;

}
