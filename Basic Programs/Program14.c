#include<stdio.h>
void Display();
int main()
{
 int iValue=0;
 printf("Enter one Number\n");
 scanf("%d",&iValue);
 Display(iValue);
return 0;
}
void Display(int fiNo)
{
int i=0;
 for(i=0;i<=fiNo;i++)
  {
   printf("*\n");
  }
}
