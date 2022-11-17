#ifndef ODD_HPP
#define ODD_HPP
#include <iostream>

class ODD
{
    public:
        enum speeds {low = 1, average = 16, fast = 48};
        enum types {CD, CD_R, CD_RW, DVD_ROM, DVD_R, DVD_RW, DVD_RAM};
    private:
        std::string name;
        std::string manufacturer;
        types type;
        int size;
        speeds speed;

    public:
        ODD(std::string name = "None"
          , std::string manufacturer = "None"
          , types type = CD
          , int size = 0
          , speeds speed = low);

        void setName(std::string name);
        void setManufacturer(std::string manufacturer);
        void setType(types type);
        void setSize(int size);
        void setSpeed(speeds speed);

        void show();
        std::string getName();
        std::string getManufacturer();
        types getType();
        int getSize();
        speeds getSpeed();
};

#endif // ODD_HPP
