#include <stdio.h>/*comment 1*/
int main(){
char *a="#include <stdio.h>/*comment 1*/%cint main(){%cchar *a=%c%s%c;%cprintf(a,10,10,34,a,34,10,10);/*comment 2*/%c}";
printf(a,10,10,34,a,34,10,10);/*comment 2*/
}