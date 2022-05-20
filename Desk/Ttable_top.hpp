#ifndef STOLARNIA_TDESK_TOP_HPP
#define STOLARNIA_TDESK_TOP_HPP

#include <iostream>
#include <string>

class Tdesk_top
{
    Tdesk_top();

    Tdesk_top(double width, double depth, double thickness, std::string color, std::string material);

protected:
    double width;
    double depth;
    double thickness;
    std::string color;
    std::string material;
};

#endif //STOLARNIA_TDESK_TOP_HPP
