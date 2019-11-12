/*! \file Shapes.cpp
 * \brief Shapes Class of the application, used to define vertexArray for other classes.
 *
 * Contains functions related to drawing Shapes.
 *
 */

#include "Shapes.h"
#include "Rectangle.h"



Shapes::Shapes(int n)
{
	vertices.setPrimitiveType(sf::LineStrip);
	vertices.resize(n);
}



void Shapes::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(vertices);
}

Shapes::~Shapes()
{
}
