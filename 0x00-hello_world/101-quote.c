#include <stdio.h>
#include <string.h>

/*
 *
 *Description: This is a c program that print a phrase using putchar() function  
 * 
 */

int main(void)
{
	char s[] = {'a','n','d',' ', 't','h', 'a', 't', ' ', 'p','i','e','c','e', 'o','f', ' ' ,'a','r','t', 'i', 's', ' ', 'u','s','e','f', 'u','l', '\"',' ', '-', ' ','D','o','r','a',' ','K','o','r','p','a','r',',',' ', '2','0','1','5','-','1','0','-','1','9'};
	int n = strlen(s);
	int i = 0;
	while(i != n)
	{
		putchar(i);
		i++;
	}	
	putchar('\n');
	return (1);
}
