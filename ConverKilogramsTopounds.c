#include<stdio.h>
int main(){

 // WEIGHT CONVERTER PROGRAM 
 int choice =0;
 float pounds=0.0f;
 float kilograms=0.0f;
 
 
 printf("Weight conversion Calculator\n");
 printf("1. kilograms to pounds\n");
 printf("2.pounds to kilograms\n");
 printf("Enter your choice :");
 scanf("%d",&choice);

 if(choice==1){
  // Kilograms to Pounds
  printf("%.2f kilograms is equal to %.2f pounds\n",kilograms,pounds);
  scanf("%f",&kilograms);
  pounds=kilograms*2.20462;
  printf("The weight in pound is %f",pounds);
 }else  if(choice==2){
  // Pounds to Kilograms

  printf("Enter the weight in pounds :");
  scanf("%f",&pounds);
  kilograms=pounds/2.20462;
  printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilograms);

 }
 else{
  printf("Invalid choice ! Please enter 1 or  \n");
 }

 

  return 0;
}