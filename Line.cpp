#include <iostream>
#include "Ellipse.cpp"
using namespace std;
#ifndef _LINE__H_
#define _LINE__H_
class Line : public Shape
{
public:
    string x1{};
    string y1{};
    string x2{};
    string y2{};
    string style{};
    string lineElement{};
    Line() : Shape("Line") {}
    Line(string i_x1, string i_y1, string i_x2, string i_y2, string i_style) : Shape("Line")
    {
        x1 = i_x1;
        x2 = i_x2;
        y1 = i_y1;
        y2 = i_y2;
        style = i_style;
        lineElement = "<line x1=\"" + x1 + "\" y1=\"" + y1 + "\" x2=\"" + x2 + "\" y2=\"" + y2 + "\"style=" + style + "\" />";
        cout << lineElement << endl;
    }
    Line(string attributes) : Shape("Line")
    {
        lineElement = "<line " + attributes + "/>";
        cout << lineElement << endl;
    }
};
#endif