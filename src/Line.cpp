/*! \file Line.cpp
 * \brief Line Class of the application, used to draw Line shape on screen.
 *
 * Contains functions related to drawing Line shape.
 *
 */

#include "Line.h"



Line::Line(sf::Vector2f bl, int w, int h) : Shapes(2) {

	bottomPoint = bl;
	width = w;
	height = h;
	fillArray();

}



void Line::fillArray() {

	vertices[0] = bottomPoint;
	vertices[1] = sf::Vector2f(bottomPoint.x + width, bottomPoint.y);

}

Line::~Line()
{
}
