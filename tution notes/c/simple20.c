#include<stdio.h>
void main()
{
    float height;
    printf("Enter height: ");
    scanf("%f",&height);
    if(height<150.0)
    printf("Dwarf");
    else if((height>=150.0)&&(height<=165.0))
    printf("Average Height");
    else if((height>=165.0)&&(height<=195.0))
    printf("Taller");
    else
    printf("Abnormal Height");
    return 0;
}
