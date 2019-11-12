/*! \file Shapes.h
 * \brief Contains function definitions for the application
 *
 * Contains the function definitions and variables used to define vertex array,
 * for other classes to inherit from and draw the shapes.
 */

#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

 //! Shapes class. Provides variables for other classes to inherit and use.
class Shapes : public sf::Drawable {
	
protected:
	sf::VertexArray vertices; //!< Defines the vertex array of vertices for sub classes to use.

public:
	Shapes(int n); //!< Main function to define vertices number of shapes in other classes.
	void draw(sf::RenderTarget& target, sf::RenderStates states) const; //!< Draw function to draw all shapes.
	~Shapes();
};