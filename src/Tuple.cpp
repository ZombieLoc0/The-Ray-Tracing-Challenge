#include "Tuple.h"
#include "dMath.h"

Tuple Tuple::vector(float x, float y, float z)
{
    return Tuple(x, y, z, 0.0f);
}

Tuple Tuple::point(float x, float y, float z)
{
    return Tuple(x, y, z, 1.0f);
}

//Fucntionality

bool Tuple::isVector(Tuple vector)
{
    return dMath::Equals(vector.w(), 0.0);
}

bool Tuple::isPoint(Tuple point)
{
    if (point.w() == 1.0f) return true;

    return false;
}
