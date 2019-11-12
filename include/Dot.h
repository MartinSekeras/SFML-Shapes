/*! \file Dot.h
 * \brief Contains function definitions for the application
 *
 * Contains the function definitions and variables used to draw Dot shape,
 * inheriting from Shapes class.
 */

#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shapes.h"

 //! Dot class. Provides a method for drawing an Dot.
class Dot : public Shapes {

private:

	sf::Vector2f bottomPoint; //!< Variable for bottom point of the shape. (Left hand side bottom corner.)
	int width; //!< Setting variable for width of the shape.
	int height; //!< Setting variable for height of the shape.

public:

	Dot(sf::Vector2f bl, int w, int h); //!< Main function of this class and default constructor.
	void fillArray(); //!< Used to fill and array with vertices to draw a Dot.
	~Dot();

};

