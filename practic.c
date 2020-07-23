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
  char *dob = malloc(20);

  if (dob == NULL)
  {
    printf("something went wrong");
    return 1;
  }

  char *number = malloc(20);
  if (number == NULL)
  {
    return 1;
  }

  printf("Enter in your name:\n");
  fgets(name, 20, stdin);

  printf("Enter in your dob:\n");
  fgets(dob, 20, stdin);

  printf("Enter in your number:\n");
  fgets(number, 20, stdin);

  printf("Name: %s \n Dob: %s \n Number %s \n",name,dob,number);

  free(name);
  free(dob);
  free(number);
}
