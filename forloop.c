#include <stdio.h>
#include <windows.h>
// #include<unistd.h> this header file for the linux/mac system to use sleep function
int main()
{
  // for loop  = Reapeat some code a limited number of times
  //         for (initialization; condition; increment/decrement)

  for (int i = 10; i >= 0; i--)
  {
    Sleep(1000); // every step will run atfer 1000 millisecond this fuctino is belongs to windows.h header file
    printf("%d\n", i);
  }
  printf("HAPPY NEW YEAR\n");
  return 0;
}