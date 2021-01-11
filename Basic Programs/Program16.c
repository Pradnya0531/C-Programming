#include<stdio.h>
void CheckNum();
int main()
{
 int iValue=0;
 printf("Enter any Number:\n");
 scanf("%d",&iValue);
 CheckNum(iValue);
 printf("************End Of Program****************\n");
}

void CheckNum(int fiNo)
{
 int fNum=0;
 if(fiNo>0)
   {
    printf("%d is positive number\n",fiNo);
   }
 else if(fiNo<0)
   {
    printf("%d is negative number\n",fiNo);
}
 else if(fiNo==0)
   {
    printf("Given number is %d\n",fiNo);
   }
else
   {
   printf("Enter valid option\n");
  }

}
