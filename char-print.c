#include <stdio.h>

int main()
{
short c = 3461;
printf("char number %i is %lc\n",c,c);
while (c<=3589)
	{
//	printf("char number %i is %lc\n",c,c);
	printf("%lc,%lc,%lc,%lc,%lc,%lc\n",c,c+1,c+2,c+3,c+4,c+5);
	c += 6;
	}
return 0;
}

