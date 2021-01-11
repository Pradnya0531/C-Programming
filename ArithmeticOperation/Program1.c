#include<stdio.h>
int Arithmetic();                                  
int main()
{
 int iValue1=0;
 int iValue2=0;
 char cChar1='\0';

 printf("Please enter first operand:\n");
 scanf("%d",&iValue1);
 
 printf("Please enter second operand:\n");
 scanf("%d",&iValue2);

 Arithmetic(iValue1,iValue2);

 printf("Do you want to continue Y/N:\n");
 scanf("%s",&cChar1);
  if((cChar1=='Y')||(cChar1=='y'))
   {
   main(); 
   }
    
   else if((cChar1=='N')||(cChar1=='n'))
   {
    printf("**********End of Program***********\n");
   }

   else
   {
    printf("Please enter valid option\n");
   }
}

int Arithmetic(int fiNo1,int fiNo2)
{
 char cChar='\0';
 int fiReturn=0;

 printf("which operation you want to do(+,-,*,/):\n");
 scanf("%s",&cChar);
   if(cChar=='+')
      {
        fiReturn=fiNo1+fiNo2;
        printf("Addition of %d and %d is %d\n",fiNo1,fiNo2,fiReturn);
 
      }

   else if(cChar=='-')
      {
        fiReturn=fiNo1-fiNo2;
        printf("Subtraction of %d and %d is %d\n",fiNo1,fiNo2,fiReturn);
      }
    
    else if(cChar=='*')
      {
       fiReturn=fiNo1*fiNo2;
       printf("Multiplcation of %d and %d is %d\n",fiNo1,fiNo2,fiReturn);
      }
   
    else if(cChar=='/')
      {
        fiReturn=fiNo1/fiNo2;
        printf("Division of %d and %d is %d\n",fiNo1,fiNo2,fiReturn);
      }
    else
      {
     printf("please enter valid operator\n");
      }
 }


   

 
