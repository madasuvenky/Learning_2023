#include<stdio.h>
int main()
{
 int a,b;
 printf("enter first number:");
 scanf("%d",&a);
 printf("enter second number:");
 scanf("%d",&b);
 if(a>b)
 {
 printf("biggest number:%d",a);
 }
 else
 {
 printf("biggest number:%d",b);
 }
 return 0;
}