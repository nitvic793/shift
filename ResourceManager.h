#ifndef RESOURCEMANAGER_H_INCLUDED
#define RESOURCEMANAGER_H_INCLUDED
/**
**/
#include <iostream>
class ResourceManager
{
public:
    ResourceManager(){}
    virtual void loadFromFile(std::string fileName) = 0;
    ~ResourceManager(){}
};
#endif // RESOURCEMANAGER_H_INCLUDED
