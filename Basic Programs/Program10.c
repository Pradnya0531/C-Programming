#include<stdio.h>
int main()
{
   char cChar1;
   char cChar2;
   char cChar3;

   printf("Enter First Character : \n");
   scanf("  %c",&cChar1);
  
   printf("Enter Second Character : \n");
   scanf("  %c",&cChar2);

   printf("Enter Third Chracter : \n");
   scanf("  %c",&cChar3);


   printf("%u\n%u\n%u\n",cChar1,cChar2,cChar3);
   int sum=cChar1+cChar2+cChar3;
   printf("\n%d\n",sum);
printf("**************End Of Program***************");
return 0;
}
