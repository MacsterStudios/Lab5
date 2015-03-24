#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle
	{
	public:
		Rectangle(IWindowAPI& _API);
		void setPosition(Point& _point);
		void setHeight(int _height);
		void setWidth(int _width);
		void draw();
		void setFillColor(Color _color);
		void setLineColor(Color _color);

	private:
		bool fillSet;
		bool positionSet;
		Color fillColor;
		Color lineColor;
		IWindowAPI* API;
		Point* position;
		int height;
		int width;
	};
}