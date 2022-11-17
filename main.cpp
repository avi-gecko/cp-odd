#include "odd.hpp"
#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru_RU.utf8");
    ODD toshiba(L"D124", L"Toshiba", ODD::DVD_RAM, 5, ODD::fast);
    ODD samsung(L"T152", L"Samsung", ODD::CD, 3.12f, ODD::low);
    ODD copy;

    std::wcout << copy << std::endl;

    copy = toshiba;
    std::wcout << copy << std::endl;
    copy = samsung;
    std::wcout << copy << std::endl;

    samsung.setSize(1.4f);
    std::wcout << samsung << std::endl;
    samsung.setSize(4);
    std::wcout << samsung << std::endl;
    std::wcout << samsung.getSize() << std::endl;
    samsung.setSize(4.5f);
    std::wcout << samsung.getSize() << std::endl;


    ODD_Child child(L"Test", L"Test", 10);
    std::wcout << child.getName() << std::endl;
}
