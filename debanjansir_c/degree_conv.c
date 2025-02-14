#include<stdio.h>
int main()
{
    float celsius,fahrenheit,kelvin;
    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit = 1.8 * celsius + 32.0;
    kelvin = celsius + 273.0;
    printf("Temperature in fahrenheit: %.2f",fahrenheit);
    printf("\nTemperature in kelvin: %.2f",kelvin);
    return 0;
}
