//PR3 Q1 write a program to print all from A to Z by skipping 3 alphabets using do while loop.
/* output----
-------------------------------
      a,e,i,m,q,u,y,
-------------------------------
*/
#include<stdio.h>
#include<conio.h>
void main(){
char a='a';
clrscr();

printf("---------------------------------\n");
do{
    printf(" %c,",a);
    a+=4;
}while(a<='z');
printf("\n---------------------------------\n");
getch();}