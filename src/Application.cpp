#include <iostream>
#include "Tuple.h"

int main()
{
	Tuple pos = Tuple::point(1.0f, 2.0f, 3.0f);
	Tuple dir = Tuple::vector(4.0f, 5.0f, 6.0f);

	Tuple a = Tuple::point(4.0f, 5.0f, 6.0f);
	Tuple b = Tuple::vector(1.0f, 2.0f, 3.0);

	std::cout << "La tupla es: " << (Tuple::isPoint(pos) ? "punto " : "vector");
}