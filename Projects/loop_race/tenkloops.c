/* Timing 10,000 loop iterations for C 
vs.
Other langs such as Python and Java */

#include <stdio.h>
#include <time.h>

int main()
{

  clock_t start, end;
  double cpu_time_used;
  
  int n = 1; 
  int iterations = 10000;

  start = clock();
  while( n <= iterations)
   {
    printf("%d loops completed\n", n);
    n++;
   }
  
   end = clock();
   cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

   printf("Time taken: %f s", cpu_time_used);
 
   return 0;
}
