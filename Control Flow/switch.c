#include <stdio.h>

void main()
{
    int x;
    printf("\nEnter a number between 1 and 5: ");
    scanf("%d",&x);
    
    switch(x)
    {
    case 1:
    printf("\nYou chose 1");
    break;
    
    case 2:
    printf("\nYou chose 2");
    break;

    case 3:
    printf("\nYou chose 3");
    break;

    case 4:
    printf("\nYou chose 4");
    break;

    case 5:
    printf("\nYou chose 5");
    break;

    default:
    printf("\nInvalid Choice. Enter a number between 1 and 5 next time");
    break;
    }

} 
