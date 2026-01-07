#include <stdio.h>
#include <string.h>

int main()
{

  // MAD  LIBS GAME
  char noun[50] = "";
  char noun2[50] = "";
  char verb[50] = "";

  char adjective2[50] = "";
  char adjective3[50] = "";

  printf("Enter a noun (animal or person):");
  fgets(noun, sizeof(noun), stdin);
  noun[strlen(noun) - 1] = '\0';

  printf("Enter a noun (animel or person):");
  fgets(noun2, sizeof(noun2), stdin);
  noun2[strlen(noun2) - 1] = '\0';

  printf("Enter an adjective(description) :");
  fgets(adjective2, sizeof(adjective2), stdin);
  adjective2[strlen(adjective2) - 1] = '\0';

  printf("Enter a verb (ending with ing):");
  fgets(verb, sizeof(verb), stdin);
  verb[strlen(verb) - 1] = '\0';

  printf("Enter an adjective(description) :");
  fgets(adjective3, sizeof(adjective3), stdin);
  adjective3[strlen(adjective3) - 1] = '\0';

  // create story using these words

  printf("I went to %s.\n", noun);
  printf("I met with %s.\n", noun2);
  printf("He came to me, he was looking %s.\n", adjective2);
  printf("He %s, You look %s today. Nice to meet you.What is your name?\" When will we meet again?\"\n", verb, adjective3);
}