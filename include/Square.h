/*! \file Square.h
 * \brief Contains function definitions for the application
 *
 * Contains the function definitions and variables used to draw Square shape,
 * inheriting from Rectangle class.
 */

#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Rectangle.h"

 //! Square class. Provides a method for drawing an Square.
class Square : public Rectangle {

private:

	sf::Vector2f bottomPoint; //!< Variable for bottom point of the shape.
	int width; //!< Variable fro width of the shape.
	int height; //!< Variable for the height of the shape.

public:

	Square(sf::Vector2f bl, int w, int h); //!< Main function of this class.
	void fillArray(); //!< Function to fill and array with vertices and draw the Square shape.
	~Square();


};

