#include <iostream>
// #include "Shape.cpp"
#include "Rectangle.cpp"
#ifndef _CIRCLE__H_
#define _CIRCLE__H_
class Circle : public Shape
{
public:
    string cx{};
    string cy{};
    string r{};
    string stroke{};
    string strokeWidth{};
    string fill{};
    string circleElement{};
    Circle() : Shape("Circle") {}
    Circle(string i_cx, string i_cy, string i_r, string i_stroke, string i_strokeWidht, string i_fill) : Shape("Circle")
    {
        cx = i_cx;
        cy = i_cy;
        r = i_r;
        stroke = i_stroke;
        strokeWidth = i_strokeWidht;
        fill = i_fill;
        circleElement = "<circle cx=\"" + cx + "\" cy=\"" + cy + "\" r=\"" + r + "\" stroke=\"" + stroke + "\" stroke-width=\"" + strokeWidth + "\" fill=\"" + fill + "\" />";
        cout << circleElement << endl;
    }
    Circle(string attributes) : Shape("Circle")
    {
        circleElement = "<circle " + attributes + "/>";
        cout << circleElement << endl;
    }
};
#endif