// Samson DeVol, CS344 Project 2, 1/13/2022

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

char buf[2048];
int count;
printf("argc %d\n", argc);
if (argc < 2){
  int fd = open(0, O_RDONLY);

  printf("read = %zd\n", read(fd, buf, sizeof buf));
  while (read(fd, buf, sizeof buf) > 0){
    printf("read = %zd\n", read(fd, buf, sizeof buf));
    count = read(fd, buf, sizeof buf);
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

    while (read(fd, buf, 1) > 0){
      write(1, buf, 1);
    }

    close(fd);
  }
}
}