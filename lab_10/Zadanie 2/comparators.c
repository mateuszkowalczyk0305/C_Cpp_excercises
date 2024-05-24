#pragma once

#include <stdbool.h>

bool isEqual(int lhs, int rhs)
{
	if (lhs == rhs)
		return True;
	else 
		return False;
}
bool isGreater(int lhs, int rhs)
{
	if (lhs > rhs)
		return True;
	else 
		return False;
}
bool isLess(int lhs, int rhs)
{
	if (lhs < rhs)
		return True;
	else 
		return False;
}