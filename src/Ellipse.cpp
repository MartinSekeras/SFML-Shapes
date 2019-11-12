/*! \file Ellipse.cpp
 * \brief Ellipse Class of the application, used to draw Ellipse shape on screen.
 *
 * Contains functions related to drawing Ellipse shape.
 *
 */

#include "..\include\Ellipse.h"



Ellipse::Ellipse(sf::Vector2f bl, int n, int radY, int radX) : Circle(bl, n, radY, radX) {

	angle = 360 / n;
	iniPointY = bl.y;
	iniPointX = bl.x;
	rX = radX;
	rY = radY;
	num = n;
	fillArray();

}



void Ellipse::fillArray() {

	theta = 0;
	for (int i = 0; i < num; i++) {
		vertices[i].position = sf::Vector2f((iniPointX + std::cos(theta) * rX), (iniPointY + std::sin(theta) * rY));
		theta += angle;
	}
}

Ellipse::~Ellipse() {
}
