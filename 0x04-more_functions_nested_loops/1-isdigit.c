#include "main.h"
/**
*_isdigit - check c if a digit.
*@c: chart to check
*Return: 1 if true 0 if false
*/

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
