// wap a program to enter any number and check armstrong number or not
//date:-27-12-2021
#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c,d=0;
     clrscr();
     printf("Enter digit no:");
     scanf("%d",&a);
     b=a;
     while(a>0)
     {
	 c=a%10;
	 d=d+c*c*c;
	 a=a/10;
     }
     if(d==b)
     {
       printf("number is armstrong");
     }
     else
     {
       printf("number is not armstrong");
     }
     getch();
}