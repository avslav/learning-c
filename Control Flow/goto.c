#include <stdio.h>

int main()
{
   int age;

   printf("Enter your age:");
   
   scanf("%d", &age);
   
   if(age >= 18) {
        goto g; }
   
   else {
        goto s; }
  
   g: 
     printf("You're an adult.\n");
     return 0;
   s: 
     printf("You're not an adult.\n");
     return 0;

}
