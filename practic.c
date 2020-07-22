#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
  char *name = malloc(20);

  if (name == NULL)
  {
    printf("you have an error allocating memory\n");
    return 1;
  }
  char dob[20];
  char number[20];

  printf("Enter in your name:\n");
  fgets(name, 20, stdin);

  printf("Enter in your dob:\n");
  scanf("%s",dob);

  printf("Enter in your number");
  scanf("%s", number);

  printf("%s - %s - %s \n",name,dob,number);

  free(name);
}
