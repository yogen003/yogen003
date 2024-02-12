#include <stdio.h>

int
main ()
{
  int no, rem,rev,no2;
  printf ("Enter number = ");
  scanf ("%d", &no);
  printf ("Reenter enter number = ");
  scanf ("%d", &no2);

  while (no > 0)
    {
      rem = no % 10;
      rev=rev*10+rem;
      no = no / 10;
    }
  
    if (no2==rev)
    printf("given number is palindrom");
    else
    printf ("given number is not palindrom");
   return 0;
}
