#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <thread>
#include "game.h"
using namespace std;
void test()
{
    cout<<"test";
}

int main()
{
    Game *game = new Game();
    cout<<"Game Created\n";
    game->initialize();
    cout<<"Initalized.\n";
    game->run();
    delete game;
    cout<<"Game Deleted";
    /*sf::RenderWindow window(sf::VideoMode(800,600),"Shift");
    sf::Event event;
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Red);
    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            if(event.type==sf::Event::Closed)
                window.close();
            if(event.type==sf::Event::KeyPressed && event.key.code==sf::Keyboard::Escape)
                window.close();
        }
        window.clear();
        window.draw(circle);
        window.display();
    }*/
    return 0;
}
