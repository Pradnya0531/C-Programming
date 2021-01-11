
#include<stdio.h>
void Display(int);
int main()
{
 int iNumS=0;
 printf("Please Enter Number");
 scanf("%d",&iNumS);
 Display(iNumS);
printf("\n");
printf("**************End Of Program**************");
return 0;
}
void Display(int iNumS2)
{
 for(int i=0;i<5;i++)
 {
  printf("$*");
 }
}
