#include <stdlib.h>

int brackets(char *s)
{
	int a = 0;
	int c = 0;
	int p = 0;
	char last;

	if (*s == '{')
		a++;
	if (*s == '[')
		c++;
	if (*s == '(')
		p++;
	if (*s == '}')
	{
		--a;
		if (last == '[' || last == '(')
			return (0);
	}
}
