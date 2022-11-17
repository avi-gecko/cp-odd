#include "odd.hpp"
#include <iostream>

ODD::ODD()
{
    this->name = L"None";
    this->manufacturer = L"None";
    this->type = ODD::CD;
    this->size = 0;
    this->fsize = 0.f;
    this->speed = ODD::low;
}

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
    this->fsize = 0.f;
    this->speed = speed;
}

ODD::ODD(const std::wstring name, const std::wstring manufacturer, types type, float size, speeds speed)
{
    this->name = name;
    this->manufacturer = manufacturer;
    this->type = type;
    this->size = 0;
    this->fsize = size;
    this->speed = speed;
}

ODD::~ODD()
{

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
    this->fsize = 0;
    this->size = size;
}

void ODD::setSize(float size)
{
    this->size = 0;
    this->fsize = size;
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

float ODD::getSize()
{
    return this->size ? this->size : this->fsize;
}

ODD::speeds ODD::getSpeed()
{
    return this->speed;
}

ODD &ODD::operator=(const ODD &copy)
{
    if (this == &copy)
        return *this;
    this->name = copy.name;
    this->manufacturer = copy.manufacturer;
    this->type = copy.type;
    this->fsize = copy.fsize;
    this->size = copy.size;
    this->speed = copy.speed;
    return *this;
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
       << L"Размер: " << (odd.size ? odd.size : odd.fsize) << L" inch" << L"\n"
       << L"Скорость: " << odd.speed << L"x" << std::endl;
    return os;
}

ODD_Parent::ODD_Parent(std::wstring name, std::wstring manufacturer)
{
    this->name = name;
    this->manufacturer = manufacturer;
}

void ODD_Parent::setName(std::wstring name)
{
    this->name = name;
}

void ODD_Parent::setManufacturer(std::wstring manufacturer)
{
    this->manufacturer = manufacturer;
}

std::wstring ODD_Parent::getName()
{
    return this->name;
}

std::wstring ODD_Parent::getManufacturer()
{
    return this->manufacturer;
}

ODD_Child::ODD_Child(std::wstring name, std::wstring manufacturer, int size):ODD_Parent(name, manufacturer)
{
    this->size = size;
}

void ODD_Child::setSize(int size)
{
    this->size = size;
}

int ODD_Child::getSize()
{
    return this->size;
}
