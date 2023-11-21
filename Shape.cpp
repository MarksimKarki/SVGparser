#include <iostream>
#include <vector>
#ifndef _SHAPE__H_
#define _SHAPE__H_

class Shape
{
public:
    string shape_name{};
    Shape(){}
    Shape(string name)
    {
        shape_name = name;
        // void get_features()
    }
    virtual string get_tag()
    {
        return shape_name;
    }
};
#endif

