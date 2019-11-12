/*! \file Arc.h
 * \brief Contains function definitions for the application
 *
 * Contains the function definitions and variables used to draw arc shape,
 * inheriting from Circle class.
 */


#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Circle.h"

//! Arc class. Provides a method for drawing an Arc.
class Arc : public Circle { 

private:

	int angle; //!< Our angle variable for storing the angle size.
	int theta; //!< This is used for adding the angle in our array.
	int iniPointX; //!< Center point on X axis for Vector2f bl.
	int iniPointY; //!< Center point on Y axis for Vector2f bl.
	int rX; //!< Used to contain X axis from bl.x.
	int rY; //!< Used to contain Y axis from bl.y.
	int num; //!< Variable to define the number of vertices.

public:
	Arc(sf::Vector2f bl, int n, int radY, int radX); //!< Main function of this class and default constructor.
	void fillArray(); //!< A function that provides array of verticies to draw Arc.
	~Arc();
};