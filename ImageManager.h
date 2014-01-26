#ifndef IMAGEMANAGER_H_INCLUDED
#define IMAGEMANAGER_H_INCLUDED

#include "ResourceManager.h"
#include <map>
#include <string>
#include <SFML/Graphics.hpp>
class ImageManager : public ResourceManager
{
    std::map<std::string,sf::Image> Images;
public:
    void loadFromFile(std::string fileName);

};

#endif // IMAGEMANAGER_H_INCLUDED
