#include <stdio.h>
int
main ()
{
  int i, rangenumber, num = 1, c = 0, letest = 0;
  printf ("Enter the Nth value:");
  scanf ("%d", &rangenumber);

  while (c != rangenumber)
    {
      int num1=num;
      int num2=0;
    while(num1!=0)
    {
        int rem=num1%10;
        num1/=10;
        num2=num2*10+rem;
    }
    if(num==num2)
      {
          c++;
          letest=num;
      }
      num = num + 1;
    }
  printf ("%dth palindrome number is %d", rangenumber, letest);
  return 0;
}
