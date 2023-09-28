#include <stdio.h>
char * to_the_end(char *e);

int main (void)
{
	char *ptr;
	char *s = "Abdo";
	ptr = to_the_end(s);
	printf("%c\n", *ptr);
	return (0);
}

char * to_the_end(char *e)
{
	char * end;

        if (*e == '\0')
	{
		end = e - 1;
		return (end);
	}

	else
		return to_the_end(e + 1);

        return (end);
}
