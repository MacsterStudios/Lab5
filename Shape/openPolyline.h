#pragma once
#include "stdafx.h"
#include "shape.h"

namespace ShapeLibrary
{
	class OpenPolyline
	{
	public:
		OpenPolyline(IWindowAPI& _API);
		void add(const Point& _point);
		void draw();
		Point getPoint(int _index);

	private :
		IWindowAPI* API;
		int nombrePoints;
		Point* pointTab;
	};
}
