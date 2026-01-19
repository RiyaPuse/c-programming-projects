#include<stdio.h>
int main(){
//CALCULATOR PROGRAM 
char operator='\0';
double num1=0.0f;
double num2=0.0f;
double result=0.0f;
printf("Enter the first number :");
scanf("%lf",&num1);

printf("Enter the Operator :");
scanf(" %c",&operator);

printf("Enter the second number :");
scanf("%lf",&num2);

switch(operator){
  case '+':
      result=num1+num2;
      break;
case '-':
result=num1-num2;
break;
case '*':
result=num1*num2;
break;
case '/':
if(num2==0){
  printf("You cannot divide by zero\n");
}
else{
result=num1/num2;
}
break;

default:
printf("Invalid Operator\n ");

}
printf("%.2lf %c %.2lf =%.2lf \n",num1,operator,num2,result);
printf("Thank you for using our Calculator\n");




  return 0;

}