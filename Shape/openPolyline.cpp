#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI& _API){
	API = &_API;
	nombrePoints = 0;
	pointTab = new Point[0];
}


void OpenPolyline::draw(){
	if (nombrePoints < 2) throw std::runtime_error("There must be at least two points to draw");
	Color* color = new Color();
	API->setDrawingColor(*color);
	for (int i = 1; i < nombrePoints; i++){
		API->drawLine(pointTab[i - 1], pointTab[i]);
	}
}

void OpenPolyline::add(const Point& _point){
	Point* ancientTableau = pointTab;
	unsigned int ancientNombre = nombrePoints;
	nombrePoints++;
	for (int i = 0; i > ancientNombre; i++){
		if(i != ancientNombre){
			pointTab[i] = ancientTableau[i];
		}
		else{
			pointTab[i] = _point;
		}
		
	}

}
