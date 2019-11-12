/*! \file Square.cpp
 * \brief Square Class of the application, used to draw Square shape on screen.
 *
 * Contains functions related to drawing Square shape.
 *
 */

#include "..\include\Square.h"



Square::Square(sf::Vector2f bl, int w, int h) : Rectangle(bl, w, h) {

	bottomPoint = bl;
	width = w;
	height = h;
	fillArray();
}



void Square::fillArray() {

	vertices[0] = bottomPoint;
	vertices[1] = sf::Vector2f(bottomPoint.x + width, bottomPoint.y);
	vertices[2] = sf::Vector2f(bottomPoint.x + width, bottomPoint.y + height);
	vertices[3] = sf::Vector2f(bottomPoint.x, bottomPoint.y + height);
	vertices[4] = sf::Vector2f(bottomPoint.x, bottomPoint.y);
}

Square::~Square() {

}
