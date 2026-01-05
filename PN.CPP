#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the values:");
scanf("%d",&a);
if(a>0)
printf("postive");
else if(a<0)
printf("negative");
else
printf("zero");
getch();
}