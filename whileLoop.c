#include <stdio.h>
#include<string.h>
int main()
{
  //  while Loop =Continue some code While the condition remains true
  // condition must be true  for us  to enter while loop

  // inifinit loop
  // while (1==1){
  //   printf("I am stuck in the loop!");

  // }

  // int number = 0;
  // while (number <= 0)
  // {
  //   printf("Enter a number greater than 0: ");
  //   scanf("%d", &number);
  // }

  // printf("Hello ! thank you to enter number greater than 0");

  char name[50]="";
  printf("Enter your name :");
  fgets(name,sizeof(name),stdin);
  name[strlen(name)-1]='\0';

  while(strlen(name)==0){
    printf("Name cannot be empty ! Please enter your name :");
    fgets(name, sizeof(name),stdin);
     name[strlen(name)-1]='\0';

  }
  printf("Thank you to enter your name %s",name);
  return 0;
}