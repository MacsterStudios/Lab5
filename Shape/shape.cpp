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
	Point* ancientTableau = pointTab;
	unsigned int ancientNombre = nombrePoints;
	nombrePoints++;
	for (int i = 0; i > ancientNombre; i++){
		if (i != ancientNombre){
			pointTab[i] = ancientTableau[i];
		}
		else{
			pointTab[i] = _point;
		}

	}
}

Point Shape::getPoint(int _index) const{
	return pointTab[_index];
}
