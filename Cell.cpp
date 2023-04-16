#include "Cell.h"

Cell::Cell(int x, int y, int cellSize) // a constructor using the x and y coordinates of the cell and the size of it.
	: x(x), y(y), cellSize(cellSize), top(true), bottom(true), right(true), left(true)//initialising the variables (set to known value)


{	// Sets values to the 4 walls which makes up a cell, each wall being a rectangle. uses SFML Vector2 class which manipulates 2-dimensional vectors
	topWall.setSize(sf::Vector2f(cellSize, 5)); // sets cellsize
	topWall.setPosition(sf::Vector2f(x * cellSize, y * cellSize)); //using cell's x and y coordinate and size
	topWall.setFillColor(sf::Color::Black);//colour of rectangular walls

	//for bottom wall
	bottomWall.setSize(sf::Vector2f(cellSize, 5));
	bottomWall.setPosition(sf::Vector2f(x * cellSize, y * cellSize));
	bottomWall.setFillColor(sf::Color::Black);

	//for right wall
	rightWall.setSize(sf::Vector2f(cellSize, 5));
	rightWall.setPosition(sf::Vector2f(x * cellSize, y * cellSize));
	rightWall.setFillColor(sf::Color::Black);
	rightWall.rotate(90);

	//for left wall
	leftWall.setSize(sf::Vector2f(cellSize, 5));
	leftWall.setPosition(sf::Vector2f(x * cellSize, y * cellSize));
	leftWall.setFillColor(sf::Color::Black);
	rightWall.rotate(90);
}

void Cell::draw(sf::RenderWindow& window)
{
	window.draw(topWall);
	window.draw(bottomWall);
	window.draw(rightWall);
	window.draw(leftWall);
}










//Old version to test rendering a basic window, before making grid

//void Cell::draw(sf::RenderWindow& window)
//{
	//shape.setFillColor(sf::Color::Blue);
	//window.draw(shape);
//}