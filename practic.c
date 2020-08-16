#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
  char*name;
  char*number;
  char*DOB;
}
people;


int main (void)
{
  people person[2];

  char user[50];
  printf("Enter in a name that you would like to search for\n");
  fgets(user,50,stdin);

  person[0].name = "Don Pulle";
  person[0].number = "201 926 0483";
  person[0].DOB = "12/31/1996";

  person[1].name = "Charlie";
  person[1].number = "210-314-5424";
  person[1].DOB = "01/31/2001";

  for (int i = 0; i < 2; i++)
  {
    if (strcmp(person[i].name, strtok(user,"\n")) == 0)
    {
      printf("%s\n%s\n",person[i].number, person[i].DOB);
      return 0;
    }

  }
    printf("nothing\n");
}
