// Samson DeVol, CS344 Project 2, 1/13/2022

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

  (void)argc;
  // open the file in read only mode
  int fd = open(argv[1], O_RDONLY);

  // perror if no file is open
  if (fd == -1){
    perror("open");
  }

  // set up buffer and read file
  char buf[2048];
  int count;

  //read file and save to buffer
  count = read(fd, buf, sizeof buf);

  // write to standard output from buffer 
  write(1, buf, count);

  // close files
  int close(int fd);
  int close(int count);

}