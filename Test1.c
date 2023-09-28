#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
int a ,k, i;
char *b , *c;
k = 0;

printf("Please input the character\n");
a = getchar();

printf("Input character is %c\n",a);

scanf("%s",c);
b = c ;
while ( *c != '\0')
{
	printf("The character is %c\n", *c);
	c++;
	k++;
}
b[k] = '\0';


printf("The scanf input is %s and the length is %d\n",b, strlen(b)); 

if (isdigit(a))
printf("The character is a digit %c\n",a);

if (isalpha(a))
printf("The character is a alphabetic %c\n",a);

if (islower(a))
{
 printf("Input is in lower case %c\n",a);
 printf("Upper case output is %c\n",toupper(a));
}
if (isupper(a))
{
 printf("Input is in upper case %c\n",a);
 printf("Lower case output is %c\n",tolower(a));
}
return(0);
}

