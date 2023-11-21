#include <iostream>
#include <deque>
#include "Shape.cpp"
using namespace std;
#ifndef _STRUCTURE__H_
#define _STRUCTURE__H_
class Structure
{
private:
     Structure() {}

public:
     std::deque<Shape> shapes;
     std::deque<string> Group;
     std::deque<string> Reactangle;
     std::deque<string> Circle;
     std::deque<string> Ellipse;
     std::deque<string> Line;
     std::deque<string> Polyline;
     std::deque<string> Polygon;
     std::deque<string> Path;
     static Structure createStructure()
     {
          return Structure();
     }
};
#endif
