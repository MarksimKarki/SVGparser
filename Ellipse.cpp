#include <iostream>
#include "Circle.cpp"
using namespace std;
#ifndef _ELLIPSE__H_
#define _ELLIPSE__H_
class Ellipse : public Shape
{

public:
    string cx{};
    string cy{};
    string rx{};
    string ry{};
    string style{};
    string ellipseElement{};
    Ellipse() : Shape("Ellipse") {}
    Ellipse(string i_cx, string i_cy, string i_rx, string i_ry, string i_style) : Shape("Ellipse")
    {
        cx = i_cx;
        cy = i_cy;
        rx = i_rx;
        ry = i_ry;
        style = i_style;

        ellipseElement = "<ellipse cx=\"" + cx + "\" cy=\"" + cy + "\" rx=" + rx + "\" ry=\"" + ry + "\"style=\"" + style + "\"/>";
        cout << ellipseElement << endl;
    }
    Ellipse(string attributes) : Shape("Ellipse")
    {
        ellipseElement = "<ellipse " + attributes + "/>";
        cout << ellipseElement << endl;
    }
};
#endif
