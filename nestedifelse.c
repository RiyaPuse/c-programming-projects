#include<stdio.h>
#include<stdbool.h>
int main(){
  float price=10.0;
  bool  isStudent=true;
  bool isSenior=false;
  if(isStudent){
    if(isSenior){
      printf("you get 10% descount on the movie ticket as a Student \n");
      printf("You get the 20% discount on the movie ticket as  a Senior\n");
      price*=0.7;
    }else{
      printf("You get the 10% discount on the movie ticket as a student \n");
      price*=0.9;
    }
  }
  else{
    if(isSenior){
      printf("You get the 20% discount on the movie ticket as a Senior \n");
      price*=0.8;
    }
  }
  printf("The price of the movie ticket is $%.2f\n",price);
  printf("have a good day with best movie\n");
  return 0;
}