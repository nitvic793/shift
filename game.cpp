
#include "game.h"
/**
**/

Game::Game() :window(sf::VideoMode(height,width),title.c_str())
{
    loadConfig();
    window.setSize(sf::Vector2u(height,width));
    window.setFramerateLimit(fpsLimit);
    window.setTitle(title);
    window.setPosition(sf::Vector2i(0,0));

}

void Game::loadConfig()
{
    fpsLimit = 60;
    height = 800;
    width = 600;
    title = "Shift";
}

void Game::loadResources()
{

}

void Game::loadLevel()
{

}

void Game::initialize()
{
    loadResources();
    loadLevel();
}

void Game::update()
{
    while(window.pollEvent(event))
    {
        switch(event.type)
        {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::KeyPressed:
            if(event.key.code==sf::Keyboard::Escape)
                window.close();
            break;
        default:
            break;
        }
    }
    /**update objects**/

    /**end update**/
}

void Game::draw()
{
    window.clear(sf::Color::Black);
    /**draw**/

    /**end draw**/
    window.display();
}

void Game::run()
{
    while(window.isOpen())
    {
        update();
        draw();
    }
}

Game::~Game()
{

}
