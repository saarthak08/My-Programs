#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
       {for(j=i;j<=4;j++)
       {	printf(" ");
       }
       for(k=1;k<=i;k++)
       {	printf("%d",k);
       }
       for(k=i-1;k>=1;k--)
       {	printf("%d",k);
       }
       printf("\n");
       }
       getch();


}