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
        float fsize;
        speeds speed;

    public:
        ODD();
        ODD(const std::wstring name
          , const std::wstring manufacturer
          , types type
          , int size
          , speeds speed);
        ODD(const std::wstring name
          , const std::wstring manufacturer
          , types type
          , float size
          , speeds speed);
        ~ODD();

        void setName(std::wstring name);
        void setManufacturer(std::wstring manufacturer);
        void setType(types type);
        void setSize(int size);
        void setSize(float size);
        void setSpeed(speeds speed);

        friend std::wostream& operator<<(std::wostream& os, const ODD& odd);
        std::wstring getName();
        std::wstring getManufacturer();
        types getType();
        float getSize();
        speeds getSpeed();

        ODD& operator=(const ODD& copy);
};

#endif // ODD_HPP
