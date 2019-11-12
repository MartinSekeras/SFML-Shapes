/*! \file Rectangle.cpp
 * \brief Rectangle Class of the application, used to draw Rectangle shape on screen.
 *
 * Contains functions related to drawing Ellipse shape.
 *
 */

#include "Rectangle.h"

Rectangle::Rectangle(sf::Vector2f bl, int w, int h) : Shapes(5) {

	bottomPoint = bl;
	width = w;
	height = h;
	fillArray();

}

void Rectangle::fillArray() {

	vertices[0] =  bottomPoint;
	vertices[1] = sf::Vector2f (bottomPoint.x + width, bottomPoint.y);
	vertices[2] = sf::Vector2f (bottomPoint.x + width, bottomPoint.y + height);
	vertices[3] = sf::Vector2f (bottomPoint.x, bottomPoint.y + height);
	vertices[4] = sf::Vector2f (bottomPoint.x, bottomPoint.y);

}

Rectangle::~Rectangle() {

}
