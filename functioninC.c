
#include <stdio.h>
#include <string.h>

// function prototype
int intro(char name[20], int age);
int main()
{
  char name[20];
  int age;
  printf("Enter you name : ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';
  printf("Enter your age : ");
  scanf("%d", &age);
  intro(name, age);
  return 0;
}
int intro(char name[20], int age)
{
  printf("Hello! My  name is %s and i am %d years old ,I am preparing for a SDE Job Role", name, age);
}