#ifndef CELL_H_INCLUDED // prevent the contents of the cell file from being included more than once
#define CELL_H_INCLUDED //both lines will be incorporated in every script

#include <SFML/Graphics.hpp> // using SFML graphics library

struct Cell
{
private: //only accessed in this class, can't be modified outside this class
	int x, y; // integer variables for x and y position coordinate of the cell
	int cellSize; // integer variable for the cell size

public://can be accessed and modified outside this class
	Cell(int x, int y, int cellSize); // Creates new cell object, x and y is the position of the cell in the grid and cellSize is self explanatory
	void draw(sf::RenderWindow& window);// using SFML class to render a 2d drawing

	sf::RectangleShape shape;//using SFML library for rectangle shape
	// Maze grid cell walls
	bool top, bottom, right, left;// bool variables, displayed when set to true
	sf::RectangleShape topWall;
	sf::RectangleShape bottomWall;
	sf::RectangleShape rightWall;
	sf::RectangleShape leftWall;

};

#endif // !CELL_H_INCLUDED

