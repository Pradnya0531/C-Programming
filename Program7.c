#include<stdio.h>
int main()
{
   int iVal=0;
   for(iVal=65;iVal<=90;iVal++)
     {
       printf("%c's Ascii Value Is %u and Address is %d\n",iVal,iVal,&iVal);
 }
printf("*********End Of Program**********");
return 0;
}

