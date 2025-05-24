#include <stdio.h>
#include <windows.h> // This is for counting time

int main(){

  // Todo: For loop = Repeat some code a limited number of timed, for( 1. initialization; 2. condition; 3. increment (Update) )

  // int i = 0; sets i to be 0
  // i<= 10; checks if i is less than 10
  // i++; increments i by 1
  // for (int i = 2; i <=10 ; i+=2){
  //   printf("%d\n", i);
  // }

  // for (int i = 20; i >=0 ; i-=2){
  //   Sleep(500);
  //   printf("%d\n", i);
  // }

  //Todo: Break and Continue
  // Break = Break out of the loop ,like Stop/Pause on a remote
  // Continue = Skip the current iteration and continue with the next one like Next on a remote

  // for (int i = 20; i >=0 ; i-=2){
  //
  //   if (i ==16) { //this will stop when we reach 16, and it will display only 20 and 18
  //     break;
  //
  //   }
  //   Sleep(500);
  //   printf("%d\n", i);
  // }

  for (int i = 20; i >=0 ; i-=2){

    if (i ==16) { //ths will skip 16 and continue onwards, so 20, 18, 14, 12, 10, 8, 6, 4, 2, 0 ( NO 16 )
      continue;

    }
    Sleep(500);
    printf("%d\n", i);
  }
  return 0;
}