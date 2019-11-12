/*! \file Arc.cpp
 * \brief Arc Class of the application, used to draw arc shape on screen.
 *
 * Contains functions related to drawing Arc shape.
 * 
 */

#include "..\include\Arc.h"



Arc::Arc(sf::Vector2f bl, int n, int radY, int radX) : Circle(bl, n, radY, radX) {

	angle = 180 / n;
	iniPointY = bl.y;
	iniPointX = bl.x;
	rX = radX;
	rY = radY;
	num = n;
	fillArray();

}



void Arc::fillArray() {

	theta = 0;
	for (int i = 0; i < num; i++) {
		vertices[i].position = sf::Vector2f((iniPointX + std::cos(theta * (3.14 / 180)) * rX), (iniPointY + std::sin(theta * (3.14 / 180)) * rY));
		theta += angle;
	}
}

Arc::~Arc() {
}
