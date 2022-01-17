// Samson DeVol, CS344 Project 2, 1/13/2022

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char buf[2048];
  int count = 2;

  if (argc < 2){
    while (count > 1){
      count = read(0, buf, sizeof buf);
      write(1, buf, count);
    }
  }

  else{
    for (int i = 1; i < argc; i++){
      int fd = open(argv[i], O_RDONLY);

      // perror if no file is open
      if (fd == -1){
        perror("open");
      }

      while (count > 0){
        count = read(fd, buf, sizeof buf);
        write(1, buf, count);
      }

      close(fd);
    }
  }
}