#include "odd.hpp"
#include <iostream>

ODD::ODD(std::string name
        , std::string manufacturer
        , types type
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

void ODD::setType(types type)
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
    std::string type;
    switch(this->type)
    {
        case ODD::CD: type = "CD"; break;
        case ODD::CD_R: type = "CD-R"; break;
        case ODD::CD_RW: type = "CD-RW"; break;
        case ODD::DVD_R: type = "DVD-R"; break;
        case ODD::DVD_RAM: type = "DVD-RAM"; break;
        case ODD::DVD_ROM: type = "DVD-ROM"; break;
        case ODD::DVD_RW: type = "DVD-RW"; break;
    }
    std::cout << this->name << " "
              << this->manufacturer << " "
              << type << " "
              << this->size << "-" <<"inch" << " "
              << this->speed << "-" << "x" << " " << std::endl;
}

std::string ODD::getName()
{
    return this->name;
}

std::string ODD::getManufacturer()
{
    return this->manufacturer;
}

ODD::types ODD::getType()
{
    return this->type;
}

int ODD::getSize()
{
    return this->size;
}

ODD::speeds ODD::getSpeed()
{
    return this->speed;
}
