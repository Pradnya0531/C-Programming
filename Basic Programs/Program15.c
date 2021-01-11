#include<stdio.h>
int chkNum(int);
int main()
{
 int iValue=0;
 printf("Please Enter any number:\n");
 scanf("%d",&iValue);
 chkNum(iValue);
 printf("************************End Of Program********************\n");
}
int chkNum(int fiNo)
{
  if(fiNo%2==0)
   {
    printf("%d is Even Number\n",fiNo);
   }
  else
   {
    printf("%d is odd Number\n",fiNo);
   }
}
