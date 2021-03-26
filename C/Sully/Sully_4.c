#include <stdio.h>
#include <stdlib.h>
#define CFILE "Sully_%i.c"
#define CMD "/usr/bin/gcc -O Sully_%i.c -o Sully_%i && ./Sully_%i"
#define STR "#include <stdio.h>%c#include <stdlib.h>%c#define CFILE %c%s%c%c#define CMD %c%s%c%c#define STR %c%s%c%cint main(){%cint i=%i;%cchar cfile[12],cmd[64];%csprintf(cfile,CFILE,i);sprintf(cmd,CMD,i,i,i);void *fd=fopen(cfile,%cw%c);%cif(fd&&i>=0){%cfprintf(fd,STR,10,10,34,CFILE,34,10,34,CMD,34,10,34,STR,34,10,10,i-1,10,10,34,34,10,10,10,10);return(system(cmd));%c}%c}"
int main(){
int i=3;
char cfile[12],cmd[64];
sprintf(cfile,CFILE,i);sprintf(cmd,CMD,i,i,i);void *fd=fopen(cfile,"w");
if(fd&&i>=0){
fprintf(fd,STR,10,10,34,CFILE,34,10,34,CMD,34,10,34,STR,34,10,10,i-1,10,10,34,34,10,10,10,10);return(system(cmd));
}
}