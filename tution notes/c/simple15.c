#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char grade;
    printf("Enter the grade: ");
    scanf("%c",&grade);
    grade=toupper(grade);
    switch(grade)
    {
    case 'O':
    printf("Remarks: OUTSTANDING");
    break;
    case 'E':
    printf("Remarks: EXCELLENT");
    break;
    case 'A':
    printf("Remarks: VERY GOOD");
    break;
    case 'B':
    printf("Remarks: GOOD");
    break;
    case 'C':
    printf("Remarks: FAIR");
    break;
    case 'F':
    printf("Remarks: FAIL");
    break;
    case 'Y':
    printf("Remarks: ABSENT");
    break;
    default:
    printf("INVALID INPUT");
    }
    return 0;
}
