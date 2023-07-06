#include<stdio.h>
#include"main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int x;

	if(!b)
	{
		return(0);
	}
	for(x = 0; b[x]; x++)
	{
		if(b[x] < '0' || b[x] > '1')
		{
			return(0);
		}
		a = 2 * a + (b[x] - '0');
	}
	return(a);
}
