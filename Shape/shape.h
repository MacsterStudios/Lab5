#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape();
		Shape(IWindowAPI &_API, int _nombrePoints);
		virtual void add(const Point& _point);
		virtual void draw();
		virtual Point getPoint(int _index) const;

		IWindowAPI* API;
		unsigned int nombrePoints;
		Point* pointTab;
	};
}
