#include "dMath.h"
#include <iostream>

bool dMath::Equals(float a, float b)
{
	if (abs(a - b) < dMath::EPSILON) return true;

	return false;
}
