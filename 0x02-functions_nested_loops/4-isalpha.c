#include "main.h"

int _isalpha(int c)
{

	if ((97 <= c && c <= 122) || (65 <= c && c <= 90))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
