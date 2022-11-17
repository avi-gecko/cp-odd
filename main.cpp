#include "odd.hpp"
#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru_RU.utf8");
    ODD toshiba(L"Toshiba", L"Toshiba", ODD::DVD_RAM, 5, ODD::fast);
    ODD copy;
    copy = toshiba;
    std::wcout << copy;
}
