#include<stdio.h>
int main(){
  // break=used to terminate the loop
  //continue = used to skip the current iteration of the loop and continue to the next iteration 
int number;
printf("Enter a number to print the table :");
scanf(" %d",&number);

  for(int i=1;i<=10;i++){
    
    // if(i==6){
    //   break;
    // } this condition will terminate the loop when the value of i becomes 6



    if(i==8){
      continue; // this condition will skip the current iteration and continue to the next iteration (when i becomes 8 i will skip the 8th iteration and directly print the 9th iteration )
    }
    printf(" %d X %d = %d\n",number,i,i*number);

  }

  return 0;
}