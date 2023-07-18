#include "main.h"
/**
 *main-checks fIor lowercase character
 *@c:the character to check
 *
 *Return:return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= ‘a’ && c <= ‘z’)
		return (1);
	
	return (0);
}

