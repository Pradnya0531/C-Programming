#include<stdio.h>    
int Addition();              
int main()
{
int iValue1=0;
int iValue2=0;
int iReturn=0;

printf("Please enter first opearnd:\n");
scanf("%d",&iValue1);
                                                                  
printf("Please enter second operand:\n");
scanf("%d",&iValue2);

iReturn=Addition(iValue1,iValue2);
printf("sum of %d and %d is %d\n",iValue1,iValue2,iReturn);
printf("**************End Of Program***************\n");
}

int Addition(int fiNo1,int fiNo2)
{
 int fiReturn=0;
 fiReturn=fiNo1+fiNo2;
 return fiReturn;
}
