#include "Piston.h"
#include <iostream>

Piston::Piston(int x, int y)
	: PlacableActor(x, y)
{

}

void Piston::Draw()
{
	std::cout << "=";
}