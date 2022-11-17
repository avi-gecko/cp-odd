#include "odd.hpp"
#include <iostream>

ODD::ODD(std::wstring name
        , std::wstring manufacturer
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

void ODD::setName(std::wstring name)
{
    this->name = name;
}

void ODD::setManufacturer(std::wstring manufacturer)
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

std::wstring ODD::getName()
{
    return this->name;
}

std::wstring ODD::getManufacturer()
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

std::wostream& operator<<(std::wostream& os, const ODD& odd)
{
    std::wstring type;
    switch(odd.type)
    {
        case ODD::CD: type = L"CD"; break;
        case ODD::CD_R: type = L"CD-R"; break;
        case ODD::CD_RW: type = L"CD-RW"; break;
        case ODD::DVD_R: type = L"DVD-R"; break;
        case ODD::DVD_RAM: type = L"DVD-RAM"; break;
        case ODD::DVD_ROM: type = L"DVD-ROM"; break;
        case ODD::DVD_RW: type = L"DVD-RW"; break;
    }
    os << L"Название: " << odd.name << L"\n"
       << L"Производитель: " << odd.manufacturer << L"\n"
       << L"Тип: " << type << L"\n"
       << L"Размер: " << odd.size << L" inch" << L"\n"
       << L"Скорость: " << odd.speed << L"x" << std::endl;
    return os;
}
