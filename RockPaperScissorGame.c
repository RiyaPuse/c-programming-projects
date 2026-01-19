// this project is to understand the concept of the Loops in C language.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // Rules:
  // 1. Rock vs Paper -> Paper wins
  // 2. Rock vs Scissor -> Rock wins
  // 3. Paper vs Scissor -> Scissor wins
  // 4. Rock vs Rock -> Draw

  // features used in this game is
  // while loop
  // if else condition
  // rand()

  // variables
  int userChoice, computerChoice;
  int userScore = 0, computerScore = 0;
  char playAgain;

  // Random number generator
  srand(time(0));
  while (1)
  {
    printf("\n---Rock Paper Scissor Game---\n");
    printf("1. Rock\n");
    printf("2.Paper\n");
    printf("3.Scissor \n");
    printf("Enter your choice :");
    scanf("%d", &userChoice);

    // Generate the computer choice
    computerChoice = rand() % 3 + 1;

    // Display compute choice
    if (computerChoice == 1)
    {
      printf("Computer Choice is  Rock\n");
    }
    else if (computerChoice == 2)
    {
      printf("Computer Choice is Paper\n");
    }
    else
    {
      printf("Computer Choice is Scissor\n ");
    }

    // Game Logic
    if (userChoice == computerChoice)
    {
      printf("Result:It's a Draw!\n");
    }
    else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))
    {
      printf("Result: You Win!\n");
    userScore++;
    }
    else{
      printf("Result:Computer Win!\n");
      computerScore++;
    }
    // Display the score
    printf("Score:You %d |Computer %d\n", userScore, computerScore);

    // Ask to play again or not 

    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &playAgain);
    if (playAgain != 'y' || playAgain != 'Y')
    {
      break;
    }
  }
  printf("\n Final Score:You %d|Computer %d\n",userScore,computerScore);
  printf("Thank you for playing!\n");
  printf("Have a nice day!\n");

  return 0;
}