#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI& _API){
	API = &_API;
	position = new Point();
	width = 0;
	height = 0;
	fillSet = false;
}

void Rectangle::setPosition(Point& _point){
	position = &_point;
}

void Rectangle::setHeight(int _height){
	height = _height;
}

void Rectangle::setWidth(int _width){
	width = _width;
}

void Rectangle::draw(){
	if (width < 0) throw std::invalid_argument("Width cannot be negative.");
	if (height < 0) throw std::invalid_argument("Height cannot be negative.");
	Color* color = new Color();
	API->setDrawingColor(*color);
	
	API->drawRectangle(*position, height, width);
	//API->drawLine(*position, Point(position->x+width, position->y));
	//API->drawLine(*position, Point(position->x, position->y+height));
	//API->drawLine(Point(position->x, position->y + height), Point(position->x+width, position->y + height));
	//API->drawLine(Point(position->x+width, position->y), Point(position->x + width, position->y + height));
	if (fillSet){
		API->setDrawingColor(fillColor);
		API->fillRectangle(*position, height, width);
	}
}


void Rectangle::setFillColor(Color _color){
	fillSet = true;
	fillColor = _color;
}