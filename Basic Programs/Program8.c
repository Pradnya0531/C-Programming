#include<stdio.h>
int main()
{
   char cChar1;
   char cChar2;
   char cChar3;
   
   printf("Enter Starting Character\n");
   scanf(" %c",&cChar1);
   printf("Enter Ending Character\n");
   scanf(" %c",&cChar2);
   
   for(cChar3=cChar1;cChar3<=cChar2;cChar3++)
    {
     printf("\n%c",cChar3);
    }

printf("******End Of Program******\n");
return 0;
}
   
