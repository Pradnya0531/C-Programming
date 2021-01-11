#include<stdio.h>
char Alphabet(char);
int main()
{
char cChar1='\0';
printf("Please enter any one alphabet\n");
scanf("  %c",&cChar1);
Alphabet(cChar1);
printf("*******End Of Program*********\n");
}

char Alphabet(char cChar)
{

if((cChar>='a')&&(cChar<='z'))
{

    printf("uppercase of %c is %c\n",cChar,cChar-32);

}
else if((cChar>='A')&&(cChar<='Z'))
{
   printf("Lowercase of %c is %c\n",cChar,cChar+32);
}
else
{
  printf("please enter valid alphabet\n");
}
}
