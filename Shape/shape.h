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
		Shape(IWindowAPI &_API);
		virtual void add(const Point& _point);
		virtual void draw();
		virtual Point getPoint(int _index) const;

	protected:
		IWindowAPI* API;
		int nombrePoints;
		Point* pointTab;
	};
}
