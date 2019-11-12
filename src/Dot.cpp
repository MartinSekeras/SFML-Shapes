/*! \file Dot.cpp
 * \brief Dot Class of the application, used to draw Dot shape on screen.
 *
 * Contains functions related to drawing Dot shape.
 *
 */

#include "Dot.h"



Dot::Dot(sf::Vector2f bl, int w, int h) : Shapes(2) {

	bottomPoint = bl;
	width = w;
	height = h;
	fillArray();

}



void Dot::fillArray() {

	vertices[0] = bottomPoint;
	vertices[1] = sf::Vector2f(bottomPoint.x + width, bottomPoint.y + height);

}

Dot::~Dot()
{
}
