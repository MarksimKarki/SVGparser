#include <iostream>
#include "Structure.cpp"
#ifndef _RECTANGLE__H_
#define _RECTANGLE__H_
class Rectangle : public Shape
{
public:
    string width{};
    string height{};
    string style{};
    std::string rectangleElement{};
    Rectangle() : Shape("Rectangle") {}
    Rectangle(string i_width, string i_height, string i_style) : Shape("Rectangle")
    {
        width = i_width;
        height = i_height;
        style = i_style;
        rectangleElement = "<rect width=\"" + width + "\" height=\"" + height + "\" style=\"" + style + "\"/>";
        cout << rectangleElement << endl;
    }
    Rectangle(string attributes) : Shape("Rectangle")
    {
        rectangleElement = "<rect" + attributes + "/>";
    }

    string get_tag()
    {
        return rectangleElement;
    }
};
#endif