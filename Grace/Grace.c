#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/*This is not a comment*/
#define STR "#include <stdio.h>%c#include <unistd.h>%c#include <fcntl.h>%c/*This is not a comment*/%c#define STR %c%s%c%c#define FILE %c%s%c%c#define MAIN()int main(){int fd = open(FILE,O_CREAT|O_WRONLY|O_TRUNC,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);if (fd){dprintf(fd,STR,10,10,10,10,34,STR,34,10,34,FILE,34,10,10);close(fd);}return 0;}%cMAIN()"
#define FILE "./Grace_kid.c"
#define MAIN()int main(){int fd = open(FILE,O_CREAT|O_WRONLY|O_TRUNC,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);if (fd){dprintf(fd,STR,10,10,10,10,34,STR,34,10,34,FILE,34,10,10);close(fd);}return 0;}
MAIN()