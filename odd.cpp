#include "odd.hpp"
#include <iostream>

ODD::ODD(std::string name
        , std::string manufacturer
        , std::string type
        , int size
        , speeds speed)

{
    this->name = name;
    this->manufacturer = manufacturer;
    this->type = type;
    this->size = size;
    this->speed = speed;
}

void ODD::setName(std::string name)
{
    this->name = name;
}

void ODD::setManufacturer(std::string manufacturer)
{
    this->manufacturer = manufacturer;
}

void ODD::setType(std::string type)
{
    this->type = type;
}

void ODD::setSize(int size)
{
    this->size = size;
}

void ODD::setSpeed(speeds speed)
{
    this->speed = speed;
}

void ODD::show()
{
    std::cout << this->name << " "
              << this->manufacturer << " "
              << this->type << " "
              << this->size << "-" <<"inch" << " "
              << this->speed << "-" << "x" << " ";
}

std::string ODD::getName()
{

}
