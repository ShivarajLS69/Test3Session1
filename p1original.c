#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the 2 numerator and denominater value\n");
  scanf("%d%d%d%d",num1,den1,num2,den2);  
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
 *num3=(den2*num1+den1*num2);
 *den3=(den2*den1);
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum of two franctions %d/%d+%d/%d is %d/%d",num1,den1,num2,den2,num3,den3);
}
void main()
{
 int num1,num2,den1,den2,num3,den3;
 input(&num1,&den1,&num2,&den2);
 add(num1,den1,num2,den2,&num3,&den3);
 output(num1,den1,num2,den2,num3,den3); 
}