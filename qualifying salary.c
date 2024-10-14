#include <stdio.h>

int main() {
  int myAge = 32;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("Congratulations you qualify for a loan.");
  } else {
    printf("Unfortunately,we are unable to offer you a loan at this time.");
  }
  
  int mysalary = 400;
  int qualifyingsalary = 21000;
  
  if (mysalary >=qualifyingsalary) {
      printf("Congratulations you qualify for a loan");
  } else {
      printf("Unfortunately,we are unable to offer you a loan at this time.");
  }
  return 0;
}