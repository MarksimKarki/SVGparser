#include <iostream>
#include "Polyline.cpp"
#ifndef _POLYGON__H_
#define _POLYGON__H_
class Polygon : public Shape
{
public:
    string points{};
    string style{};
    string polygonElement{};
    Polygon() : Shape("Polygon") {}
    Polygon(string i_points, string i_style) : Shape("Polygon")
    {
        points = i_points;
        style = i_style;
        polygonElement = "<polygon points=\"" + points + "\" style=\"" + style + "\" />";
        cout << polygonElement << endl;
    }
    Polygon(string attributes) : Shape("Polygon")
    {
        polygonElement = "<polygon " + attributes + "/>";
        cout << polygonElement << endl;
    }
};
#endif