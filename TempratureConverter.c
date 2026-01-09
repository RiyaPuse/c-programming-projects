#include <stdio.h>
int main()
{
  // TEMPERATURE CONVERsION PRGORAM

  char choice = '\0';
  float celsius = 0.0f;
  float fahrenheit = 0.0f;

  printf("Temperature conversion  program \n");
  printf("C. Celsius to Fahrenheit\n");
  printf("F. Fahrenheit to Celsius\n");
  printf("Enter your choice  wheather you want to convert celsius to fahrenheit or fahrenheit to celsius ?:");
  scanf("%c", &choice);

  if (choice == 'C'){
    //C TO F
  printf("Enter the temperature in celsius :");
  scanf("%f", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("%.1f celsius is equal to %.1f fahrenheit ", celsius, fahrenheit);
  
  }
  else if (choice == 'F')
  {
    //F TO C
    printf("Enter the temperature in fahrenheit :");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.1f Frahenheit is equal to %.1f celsius ", fahrenheit, celsius);
  }
  else{
    printf("Invalid choice ! please select either C or F");
  }
  return 0;
}