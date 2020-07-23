#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

  person[0].name = "Don Pullen";
  person[0].number = "201 926 0483";
  person[0].DOB = "12/31/1996";

  person[1].name = "Charlie Something";
  person[1].number = "201-926-0483";
  person[1].DOB = "01/31/2001";

  printf("%s\n",person[0].name);
  printf("%s\n",person[1].name);
}
