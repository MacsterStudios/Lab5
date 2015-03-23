#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(){
}

Shape::Shape(IWindowAPI &_API, int _nombrePoints = 0) :
	API(&_API),
	nombrePoints(_nombrePoints)
{
	pointTab = new Point[nombrePoints];
}

void Shape::draw(){

}

void Shape::add(const Point& _point){

}

Point Shape::getPoint(int _index) const{
	return pointTab[_index];
}
