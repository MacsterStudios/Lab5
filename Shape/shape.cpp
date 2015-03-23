#include "stdafx.h"
#include "shape.h"

using namespace ShapeLibrary;

Shape::Shape(){
}

Shape::Shape(IWindowAPI &_API){
	API = &_API;
	nombrePoints = 0;
	pointTab = new Point[0];
}

void Shape::draw(){

}

void Shape::add(const Point& _point){
	pointTab[nombrePoints] = _point;
	nombrePoints++;
}

Point Shape::getPoint(int _index) const{
	return pointTab[_index];
}
