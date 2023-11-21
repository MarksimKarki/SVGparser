#include <iostream>
#include <fstream>
#include <string>
#include "Structure.cpp" // Include the appropriate header file for Structure
using namespace std;
#ifndef __GENERATEOUTPUTFILE__H_
#define __GENERATEOUTPUTFILE__H_
class GenerateOutputFile
{
public:
    int createOutputFile(Structure &str);
};

int GenerateOutputFile::createOutputFile(Structure &str)
{
    std::ofstream outputFile;
    outputFile.open("Output.svg");
    outputFile << "<svg width=\"800\" height=\"800\" viewBox=\"0 0 1024 1024\" xmlns=\"http://www.w3.org/2000/svg\">\n";

    // Use an iterator to iterate through the list
    auto it = str.shapes.begin();
    while (it != str.shapes.end())
    {
        if (it->get_tag() == "Rectangle")
        {
            outputFile << str.Reactangle.front(); // Assuming get_tag() returns a string
            str.Reactangle.pop_front();           // Remove the processed element from the deque
        }
        else if (it->get_tag() == "Circle")
        {
            outputFile << str.Circle.front();
            str.Circle.pop_front();
        }
        else if (it->get_tag() == "Ellipse")
        {
            outputFile << str.Ellipse.front();
            str.Ellipse.pop_front();
        }
        else if (it->get_tag() == "Line")
        {
            outputFile << str.Line.front();
            str.Line.pop_front();
        }
        else if (it->get_tag() == "Polyline")
        {
            outputFile << str.Polyline.front();
            str.Polyline.pop_front();
        }
        else if (it->get_tag() == "Polygon")
        {
            outputFile << str.Polygon.front();
            str.Polygon.pop_front();
        }
        else if (it->get_tag() == "Path")
        {
            outputFile << str.Path.front();
            str.Path.pop_front();
        }
        else if (it->get_tag() == "Group")
        {

            outputFile << str.Group.front();
            str.Group.pop_front();
        }
        // Add similar conditions for other shape types (Ellipse, Line, etc.)

        // Move to the next shape
        ++it;
    }

    outputFile << "\n</svg>";
    outputFile.close();
    cout << "Your file has been saved as OutputFile.svg\n";
    return 1;

}
#endif