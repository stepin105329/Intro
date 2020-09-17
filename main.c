#include<stdio.h>
void main()
{
  int x,y,maximum;
 printf("Enter any two numbers: ");
 scanf("%d%d", &x, &y);
 maximum = max(x, y);
 printf("\nMaximum = %d", maximum);
 return 0;
 
}
