#ifndef GRID_H_INCLUDED
#define GRID_H_INCLUDED

#include "vector"
#include "Cell.h"

struct Grid
{
private:

	int rows, collumns; // integer variables for the rows and collumns
	int maxSize; //max size of grid
	int cellWidth; // width of each cell

	std::vector<Cell*> cells;;

public:
	Grid(int rows, int collumns, int cellWidth);

	int getIndex(int x, int y, int collumns);
	void display(sf::RenderWindow& window);

};

#endif // !GRID_H_INCLUDED


