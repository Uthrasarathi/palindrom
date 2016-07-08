#include<stdio.h>
#include<conio.h>
void main()
{
int n,r1=0,r2,a;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
a=n;
while(n!=0)
{
r2=n%10;
r1=r1*10+r2;
n/=10;
}
if(a==r1)
{
printf("%d is palindrom",a);
}
else
{
printf("%d is a palindrom",a);
}
getch();
}
