// Samson DeVol, CS344 Project 2, 1/13/2022

#include <stdio.h>

int main (int argc, char *argv[]){

  for (int i = 1; i < argc; ++i){
    printf("%s\n", argv[i]);
  }

}