#include <iostream>
#include "path.cpp"


class Group : public Shape
{
public:
    Group() : Shape("Group") { std::cout << "group"; }
};
