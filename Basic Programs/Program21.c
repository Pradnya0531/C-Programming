
#include<stdio.h>
int CheckNum1(int ,int);
int main()
{
 int ivalue1=0;
 int ivalue2=0;
 printf("Please Enter two Numbers:");
 scanf("%d %d",&ivalue1,&ivalue2);
 CheckNum1(ivalue1,ivalue2);
printf("**********End Of Program**********");
}
int CheckNum1(int iNum,int iNum2)
{
  if(iNum==iNum2)
   {
    printf("Equal");
   }
  else if(iNum!=iNum2)
   {
    printf("Not Equal");
   }
  else if(iNum!=(-iNum2))
   {
    printf("Not Equal");
}
}
