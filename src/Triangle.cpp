/*! \file Triangle.cpp
 * \brief Triangle Class of the application, used to draw Triangle shape on screen.
 *
 * Contains functions related to drawing Triangle shape.
 *
 */

#include "Triangle.h"



Triangle::Triangle(sf::Vector2f bl, int w, int h) : Shapes(4) {

	bottomPoint = bl;
	width = w;
	height = h;
	fillArray();
}



void Triangle::fillArray() {

	vertices[0] = bottomPoint;
	vertices[1] = sf::Vector2f(bottomPoint.x + width, bottomPoint.y);
	vertices[2] = sf::Vector2f(bottomPoint.x + width / 2, bottomPoint.y + height);
	vertices[3] = sf::Vector2f(bottomPoint.x, bottomPoint.y);
}

Triangle::~Triangle()
{
}
