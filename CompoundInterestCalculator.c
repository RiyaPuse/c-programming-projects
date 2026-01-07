#include <stdio.h>
#include <math.h>
int main()
{

  // COMPOUND INTEREST CALCULATOR
  double principal = 0.0;
  double rate = 0.0;
  int years = 0;
  int timeCompounded = 0;
  double total = 0.0;

  printf("Enter the principal (p) :");
  scanf("%lf", &principal);

  printf("Enter the rate %  (r) :");
  scanf("%lf", &rate);
  rate = rate / 100;

  printf("Enter the # of years (t) :");
  scanf("%d", &years);

  printf("Enter # of times compounded per year (n) :");
  scanf("%d", &timeCompounded);
  // formula  to calculate compound interest p*(1+r/n)^nt

  total = principal * pow(1 + rate / timeCompounded, timeCompounded * years);
  printf("Atfer %d years, the total will be $%.2lf", years, total);
}