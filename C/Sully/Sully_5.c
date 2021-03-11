#include <stdio.h>
#include <stdlib.h>
#define NAME "Sully_%i"
#define FILENAME "%s.c"
#define CMD "gcc -O %s -o %s && ./%s"
int main(){
 int i=4;
 char filename[12],name[10],cmd[64];
 sprintf(name,NAME,i);
 sprintf(filename,FILENAME,name);
 sprintf(cmd,CMD,filename,name,name);
 void *fd=fopen(filename,"w");
 if(fd){
  char *a="#include <stdio.h>%c#include <stdlib.h>%c#define NAME %c%s%c%c#define FILENAME %c%s%c%c#define CMD %c%s%c%cint main(){%c int i=%i;%c char filename[12],name[10],cmd[64];%c sprintf(name,NAME,i);%c sprintf(filename,FILENAME,name);%c sprintf(cmd,CMD,filename,name,name);%c void *fd=fopen(filename,%cw%c);%c if(fd){%c  char *a=%c%s%c;%c  fprintf(fd,a,10,10,34,NAME,34,10,34,FILENAME,34,10,34,CMD,34,10,10,i-1,10,10,10,10,10,34,34,10,10,34,a,34,10,10,10);%c }%c}";
  fprintf(fd,a,10,10,34,NAME,34,10,34,FILENAME,34,10,34,CMD,34,10,10,i-1,10,10,10,10,10,34,34,10,10,34,a,34,10,10,10);
 }
}