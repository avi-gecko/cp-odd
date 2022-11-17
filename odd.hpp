#ifndef ODD_HPP
#define ODD_HPP
#include <iostream>

class ODD
{
    public:
        enum speeds {low = 1, average = 16, fast = 48};
    private:
        std::string name;
        std::string manufacturer;
        std::string type;
        int size;
        speeds speed;

    public:
        ODD(std::string name = "None"
          , std::string manufacturer = "None"
          , std::string type = "None"
          , int size = 0
          , speeds speed = low);

        void setName(std::string name);
        void setManufacturer(std::string manufacturer);
        void setType(std::string type);
        void setSize(int size);
        void setSpeed(speeds speed);

        void show();




};

#endif // ODD_HPP
