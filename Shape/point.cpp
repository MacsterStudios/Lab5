#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0) throw std::invalid_argument("The value for 'X' cannot be negative.");
	if (_y < 0) throw std::invalid_argument("The value for 'Y' cannot be negative.");
}

bool Point::operator == (const Point & point) const
{
	if (x != point.x) return false;
	if (y != point.y) return false;
	return true;
}

bool Point::operator != (const Point & point) const
{
	throw logic_error("Not Implmented yet");
	return false; 
}
