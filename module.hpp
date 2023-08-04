
#ifndef MODULE_HPP
#define MODULE_HPP

#include <iostream>
#include <string>
#include <map>
#include <functional>

class Module
{

public:
    std::string name;
    std::string description;
    std::function<int()> initFunction;
    Module()
    {
        this->name = "Module";
        this->description = "Module";
    }
    Module(std::string name, std::string description)
    {
        this->name = name;
        this->description = description;
    }
    void runInit()
    {
        this->initFunction();
    }
    void setInit(std::function<int()> initFunction)
    {
        this->initFunction = initFunction;
    }
};

#endif