#include<stdio.h>
#include<string.h>

struct avslav {

char name[50];
char favSubject[50];
int age;
};

int main()
{

  struct avslav avslav1;
  avslav1.age = 14;
  strcpy(avslav1.name, "avslav");
  strcpy(avslav1.favSubject, "Science");

  printf("%d", avslav1.age);
  printf("\n%s", avslav1.name);
  printf("\n%s", avslav1.favSubject);
  return 0;

}
