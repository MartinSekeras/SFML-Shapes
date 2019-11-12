/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include <iostream>
#include "SFML/Graphics.hpp"
#include "Shapes.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Dot.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Square.h"
#include "Arc.h"

int main() //!< Entry point for the application.
{

	//! Sets window size, name and framerate.

	sf::RenderWindow window(sf::VideoMode(1024, 800), "Lab Book 1 - Shapes");
	window.setFramerateLimit(60);

	//! Class calls.

	Rectangle rect(sf::Vector2f(50, 50), 100, 50);
	Square square(sf::Vector2f(50, 300), 100, 100);
	Triangle tria(sf::Vector2f(200, 50), 50, 50);
	Line line(sf::Vector2f(300, 50), 50, 0);
	Dot dot(sf::Vector2f(400, 50), 1, 1);
	Circle circle(sf::Vector2f(100, 200), 60, 50, 50);
	Ellipse eli(sf::Vector2f(275, 200), 60, 50, 75);
	Arc arc(sf::Vector2f(450, 200), 60, 50, 50);

	//! Main while loop for drawing.

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		//! Drawing of shapes starts below.

		window.clear();
		
		window.draw(rect);
		window.draw(tria);
		window.draw(line);
		window.draw(dot);
		window.draw(circle);
		window.draw(eli);
		window.draw(square);
		window.draw(arc);

		window.display();

	}
}