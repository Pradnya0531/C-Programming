#include<stdio.h>
int main()
{
 Addition();
 Subtraction();
 Multiplication();
 Division();

printf("***********End Of Program*************\n");
return 0;
 
 
 
   
}

void Addition()
{
 int iAdd1=0;
 int iAdd2=0;
 int iAdd3=0;
  
 printf("Enter First Value\n");
 scanf("%d",&iAdd1);
 
 printf("Enter Second Value\n");
 scanf("%d",&iAdd2);
 
 iAdd3=iAdd1+iAdd2;
 
 printf("Addition of two value is:%d\n",iAdd3);

 printf("************************************\n");

}

void Subtraction()
{
  int iSub1=0;
  int iSub2=0;
  int iSub3=0;
  
 printf("Enter First Value\n");
 scanf("%d",&iSub1);
 
 printf("Enter Second Value\n");
 scanf("%d",&iSub2);
 
 iSub3=iSub1-iSub2;
 
 printf("Subtraction of two value is:%d\n",iSub3);

 printf("************************************\n");
}

void Multiplication()
{
 int iMul1=0;
 int iMul2=0;
 int iMul3=0;
 
 
 printf("Enter First Value\n");
 scanf("%d",&iMul1);
 
 printf("Enter Second Value\n");
 scanf("%d",&iMul2);
 
 iMul3=iMul1*iMul2;
 
 printf("Multiplication of two value is:%d\n",iMul3);


 printf("************************************\n");
}

void Division()
{
 float fDiv1=0.0;
 float fDiv2=0.0;
 float fDiv3=0.0;

 printf("Enter First Value\n");
 scanf("%d",&fDiv1);
 
 printf("Enter Second Value\n");
 scanf("%d",&fDiv2);
 
 fDiv3=fDiv1/fDiv2;
 
 printf("Division of two value is:%d\n",fDiv3);

 printf("************************************\n");
}


