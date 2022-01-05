//wap to enter any number and check is is prime no or not.
//date:-24-12-2021
#include<stdio.h>
#include<conio.h>
void main()
{
      int i,n,c=0;
      clrscr();
      printf("Enter any number:");
      scanf("%d",&n);
      for(i=2;i<n;i++)
      {
	 if(n%i==0)
	 {
	       c=1;
	       break;
	 }
	 i=2+1;
      }
      if(c==1)
      printf("no is not prime");
      else
      printf("no is prime");
      getch();
}