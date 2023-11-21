#include <iostream>
#include "Line.cpp"
using namespace std;
#ifndef _POLYLINE__H_
#define _POLYLINE__H_
class Polyline : public Shape
{

public:
    string points{};
    string style{};
    string polylineElement{};
    Polyline() : Shape("Polyline") {}
    Polyline(string i_points, string i_style) : Shape("Polyline")
    {
        points = i_points;
        style = i_style;
        polylineElement = "<polyline points=\"" + points + "\" style=" + style + " />";
        cout << polylineElement << endl;
    }
    Polyline(string attributes) : Shape("Polyline")
    {
        polylineElement = "<polyline " + attributes + "/>";
        cout << polylineElement << endl;
    }
};
#endif