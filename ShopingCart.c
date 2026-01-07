#include <stdio.h>
#include <string.h>


int main()
{

  //SHOPING CART PROGRAM
  char item[50] = "";
  float price = 0.0f;
  int Quantity = 0;
  char currency = '$';
  float total = 0.0f;

  printf("what item would you like to buy?:");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("What is the price of the item?:");
  scanf("%f", &price);

  printf("How many would you like to buy?:");
  scanf("%d", &Quantity);

  printf("You bought %d %s's per item priced %c%.2f\n", Quantity, item, currency, price);

  total = price * Quantity;
  printf("Your total is %c%.2f", currency, total);
}