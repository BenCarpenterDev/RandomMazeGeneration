#include "Grid.h"

Grid::Grid(int rows, int cols, int cellWidth)
    : rows(rows), collumns(collumns)
{
    maxSize = rows * collumns;
    this->cellWidth = cellWidth;

    cells = std::vector<Cell*>(rows * collumns);

    for (int y = 0; y < rows; y++)
    {
        for (int x = 0; x < collumns; x++)
        {
            cells[getIndex(x, y, collumns)] = new Cell(x, y, cellWidth);
        }
    }

}

int Grid::getIndex(int x, int y, int collumns)
{
    return y * collumns + x;
}

void Grid::display(sf::RenderWindow& window)
{
    for (int i = 0; i < cells.size(); i++)
    {
        cells[i]->draw(window);

    }
}

