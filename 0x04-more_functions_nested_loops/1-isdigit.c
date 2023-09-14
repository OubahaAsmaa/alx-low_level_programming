#include "main.h"
/**
 *_isdigit - check c if a digit.
 * @c: char to check
 * Return: to 1 if c is a digit to 0 if c is not 
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
