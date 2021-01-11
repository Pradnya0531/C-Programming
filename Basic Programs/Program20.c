
#include<stdio.h>
int CheckNum(int);
int main()
{
 int iVal=0;
 printf("Please Enter any One Operand\n");
 scanf("%d",&iVal);
 CheckNum(iVal);
printf("*********End*********\n");


}
int CheckNum(int fiNum)
{
 if(fiNum>100)
  {
   printf("%d is Greater than 100\n",fiNum);
  }
 else
  {
   printf("%d is Smaller than 100\n",fiNum);
  }
}
