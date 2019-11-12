/*! \file Circle.cpp
 * \brief Circle Class of the application, used to draw circle shape on screen.
 *
 * Contains functions related to drawing Circle shape.
 *
 */

#include "..\include\Circle.h"



Circle::Circle(sf::Vector2f bl, int n, int radY, int radX) : Shapes(n) {

	angle = 360 / n;
	iniPointY = bl.y;
	iniPointX = bl.x;
	rX = radX;
	rY = radY;
	num = n;
	fillArray();

}



void Circle::fillArray() {

	theta = 0;
	for (int i = 0; i < num; i++) {
		vertices[i].position = sf::Vector2f((iniPointX + std::cos(theta) * rX), (iniPointY + std::sin(theta) * rY));
		theta += angle;
	}
}

Circle::~Circle() {
}
