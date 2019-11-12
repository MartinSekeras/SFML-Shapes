/*! \file Rectangle.h
 * \brief Contains function definitions for the application
 *
 * Contains the function definitions and variables used to draw Rectangle shape,
 * inheriting from Shapes class.
 */

#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shapes.h"

 //! Rectangle class. Provides a method for drawing an Rectangle.
class Rectangle : public Shapes {

protected:

	sf::Vector2f bottomPoint; //!< Variable for bottom point of the shape.
	int width; //!< Variable fro width of the shape.
	int height; //!< Variable for the height of the shape.

public:

	Rectangle(sf::Vector2f bl, int w, int h); //!< Main function of this class.
	void fillArray(); //!< Function to fill and array with vertices and draw the Rectangle shape.
	~Rectangle();

};