#include "Application.h"

Application::Application()
    : _window({ WIDTH, HEIGHT }, "Maze Generator")
{
    _window.setFramerateLimit(60);

    cellWidth = 50;
    grid = new Grid(HEIGHT / cellWidth, WIDTH / cellWidth, cellWidth);
}

void Application::run()
{
    //Clear -> update -> draw -> display -> poll events
    while (_window.isOpen())
    {
        _window.clear(sf::Color::White);
        update();
        _window.display();
        pollEvents();
    }
}

void Application::pollEvents()
{
    sf::Event e;
    while (_window.pollEvent(e))
    {
        if (e.type == sf::Event::Closed)
        {
            _window.close();
        }

    }
}

void Application::update()
{
    //Update/Draw
    grid->display(_window);
}