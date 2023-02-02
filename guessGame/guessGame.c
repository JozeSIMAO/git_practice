#include <stdio.h>
#include <stdlib.h>

int main () {

  int number = 10;
  int guess;
  int guessLives = 3;
  int outOfGuesses = 0;
  int guessCount = 0;

  while ( guess != number && outOfGuesses == 0) {
    if (guessCount < guessLives) {
      printf("Enter Your Guess\n");
      scanf("%d", &guess);
      guessCount++;
    } else {
      outOfGuesses = 1;
    }
  }
  if (outOfGuesses == 0) {
    printf("YOU WIN!\n");
  } else {
    printf("YOU LOSE!\n");
  }
  return 0;
}
