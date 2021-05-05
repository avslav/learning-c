// Timed a for loop

#include<stdio.h> 
#include <time.h>
 
int main ()
{
  clock_t start, end;
  double cpu_time_used;
  int n, times=10000;
  
   start = clock();
   
   for(n = 1; n <= times; n = n + 1 )
   {
      printf("For loops completed: %d\n", n);
   }
   end = clock();
   cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

   printf("Time taken: %f s", cpu_time_used);
 
   return 0;
}
