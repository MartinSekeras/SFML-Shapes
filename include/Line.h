/*! \file Line.h
 * \brief Contains function definitions for the application
 *
 * Contains the function definitions and variables used to draw Line shape,
 * inheriting from Shapes class.
 */

#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shapes.h"

 //! Line class. Provides a method for drawing an Line.
class Line : public Shapes {

private:

	sf::Vector2f bottomPoint; //!< Variable for bottom point of the shape. (Left hand side bottom corner.)
	int width; //!< Setting variable for width of the shape.
	int height; //!< Setting variable for height of the shape.

public:

	Line(sf::Vector2f bl, int w, int h); //!< Main functions of Line Class.
	void fillArray(); //!< Used to fill and array with vertices to draw a Line.
	~Line();

};

