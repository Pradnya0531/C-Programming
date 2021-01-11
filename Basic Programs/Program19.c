#include<stdio.h>
char CheckChar(char);
int main()
{
 char cChar5='\0';
 printf("Enter any one alphabet");
 scanf("%c",&cChar5);
 CheckChar(cChar5);
printf("********End Of Program********"); 
 
}
char CheckChar(char char2)
{
 if(char2=='a'||'e'||'i'||'o'||'u')
{
     printf("TRUE");
}
 else
    {
      printf("FALSE");
   }
}
