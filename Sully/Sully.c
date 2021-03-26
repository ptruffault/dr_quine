#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define CFILE "Sully_%i.c"
#define CMD "/usr/bin/gcc -O Sully_%i.c -o Sully_%i && ./Sully_%i"
#define STR "#include <stdio.h>%5$c#include <stdlib.h>%5$c#include <fcntl.h>%5$c#define CFILE %6$c%1$s%6$c%5$c#define CMD %6$c%2$s%6$c%5$c#define STR %6$c%3$s%6$c%5$cint main(){%5$c%7$cint i=%4$i;%5$c%7$cchar cfile[12],cmd[60];%5$c%7$cif(i+1){%5$c%7$c%7$csprintf(cfile,CFILE,i);%5$c%7$c%7$csprintf(cmd,CMD,i,i,i);%5$c%7$c%7$cint fd=open(cfile,O_CREAT|O_WRONLY,S_IRWXO);%5$c%7$c%7$cif(fd){%5$c%7$c%7$c%7$cdprintf(fd,STR,CFILE,CMD,STR,i-1,10,34,9);%5$c%7$c%7$c%7$creturn(system(cmd));%5$c%7$c%7$c}%5$c%7$c}%5$c}"
int main(){
	int i=5;
	char cfile[12],cmd[60];
	if(i+1){
		sprintf(cfile,CFILE,i);
		sprintf(cmd,CMD,i,i,i);
		int fd=open(cfile,O_CREAT|O_WRONLY,S_IRWXO);
		if(fd){
			dprintf(fd,STR,CFILE,CMD,STR,i-1,10,34,9);
			return(system(cmd));
		}
	}
}