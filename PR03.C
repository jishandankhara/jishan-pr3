//PR3 Q3 write a program to find the sum of a frist and the last digit of a number.
/*Enter a number:234
-=-=-=-=-=-=-=-=-
       6
-=-=-=-=-=-=-=-=-*/
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr();
printf("Enter a number:");
scanf("%d",&a);
c =a%10;
while(a>10)
{b=a/10;
a=b;}
d=b+c;
printf("-=-=-=--=-=-=-=-=-=-");
printf("        %d",d);
printf("-=-=-=--=-=-=-=-=-=-");
getch();}
