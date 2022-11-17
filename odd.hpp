#ifndef ODD_HPP
#define ODD_HPP
#include <iostream>

class ODD
{
    public:
        enum speeds {low = 1, average = 16, fast = 48};
        enum types {CD, CD_R, CD_RW, DVD_ROM, DVD_R, DVD_RW, DVD_RAM};
    private:
        std::wstring name;
        std::wstring manufacturer;
        types type;
        int size;
        speeds speed;

    public:
        ODD(std::wstring name = L"None"
          , std::wstring manufacturer = L"None"
          , types type = CD
          , int size = 0
          , speeds speed = low);

        void setName(std::wstring name);
        void setManufacturer(std::wstring manufacturer);
        void setType(types type);
        void setSize(int size);
        void setSpeed(speeds speed);

        friend std::wostream& operator<<(std::wostream& os, const ODD& odd);
        std::wstring getName();
        std::wstring getManufacturer();
        types getType();
        int getSize();
        speeds getSpeed();
};

#endif // ODD_HPP
