#include <stdio.h>

void main()

{
  int a, b;

  printf("\nEnter a number for value a:");
  scanf("%d", &a);

  printf("\nEnter a number for value b:");
  scanf("%d", &b);

  if (a > b)
  {
    printf("a > b");
  }
  else if (b > a)
  {
    printf("b > a");
  }
  else
  {
    printf("a = b");
  }

}
