#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI& _API){
	API = &_API;
	width = 0;
	height = 0;
	fillSet = false;
	lineColor = Color();
}

void Rectangle::setPosition(Point& _point){
	positionSet = true;
	position = &_point;
}

void Rectangle::setHeight(int _height){
	if (_height < 0) throw std::invalid_argument("Height cannot be negative.");
	height = _height;
}

void Rectangle::setWidth(int _width){
	if (_width < 0) throw std::invalid_argument("Width cannot be negative.");
	width = _width;
}

void Rectangle::draw(){ 
	if (positionSet != true) throw std::runtime_error("No position");
	API->setDrawingColor(lineColor);
	
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

void Rectangle::setLineColor(Color _color){
	lineColor = _color;
}
