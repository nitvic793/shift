#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>

#define DEBUG 1

#if DEBUG
#include <iostream>
#endif // DEBUG

class Game
{
    sf::RenderWindow window;
    sf::Event event;
    unsigned int fpsLimit;
    int32_t height;
    int32_t width;
    std::string title;
    void loadConfig();
    void loadResources();
    void loadLevel();
    void update();
    void draw();
public:
    Game();
    void initialize();
    void run();
    ~Game();
};

#endif // GAME_H_INCLUDED
