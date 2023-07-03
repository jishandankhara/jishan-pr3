//write a program to count the total number of digits in a number.
/*Enter any number:12345
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
number of digits in this value are 5
-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
#include<stdio.h>
#include<conio.h>
void main(){
int a,b=0;
clrscr();
printf("Enter any number:");
scanf("%d",&a);
while(a !=0){
a= a/10;
b++;}
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
printf("number of digits in this value are %d\n",b);
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

getch();}