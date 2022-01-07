//wap to enter any number and check number is palindorme or not//
#include<stdio.h>
#include<conio.h>
void main()
{
      int n,num,rev=0;
      clrscr();
      printf("enter any number");
      scanf("%d",&n);
      num=n;
      while(n!=0)
      {
	  rev=(rev*10)+(n%10);
	  n/=10;
      }
      if(rev==num)
      {
	  printf("%d it is palidrome",num);
      }
      else
      {
	  printf("%d it is not palidrome",num);
      }
      getch();
}