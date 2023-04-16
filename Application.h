#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED

#include <SFML/Graphics.hpp>

#include "Grid.h"


constexpr int WIDTH = 400, HEIGHT = 400;

struct Application
{
private:
    void pollEvents();
    void update();
    sf::RenderWindow _window;

    Grid* grid;
    int cellWidth = 40;

public:
    Application();

    void run();
};

#endif // APPLICATION_H_INCLUDED

