#include <iostream>
#include "Polygon.cpp"
#ifndef __PATH__H_
#define __PATH__H_
class Path : public Shape
{
public:
   string d{};
   string lineElement{};
   Path() : Shape("Path") {}
   // Path(string i_d) : Shape("Path")
   // {
   //    d = i_d;
   //    lineElement = "<path d=\"" + d + "\"/>";
   //    cout << lineElement << endl;
   // }
   Path(string attributes) : Shape("Path")
   {
      lineElement = "<path " + attributes + "/>";
      cout << lineElement << endl;
   }
};
#endif