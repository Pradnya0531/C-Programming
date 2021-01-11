#include<stdio.h>
int Display();
int main()
{
   Display();
printf("***********End Of Number***********");
return 0;
}
int Display()
{
 int fiNum=0;
 for(fiNum=0;fiNum<=20;fiNum++)
   {
    if(fiNum%2==0)
       {
        printf("%d ",fiNum); 
       }
   }
}
