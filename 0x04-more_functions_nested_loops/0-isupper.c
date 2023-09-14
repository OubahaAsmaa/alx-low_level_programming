#include "main.h"
/**
* _isupper - These functions check whether c.
* @c: char to check
* Return: to 1 if uppercase to 0 if lowercase
*/

int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
