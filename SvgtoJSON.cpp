#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "pugixml.cpp"
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
#ifndef __SVGTOJSON__H_
#define __SVGTOJSON__H_
class SvgtoJson
{
public:
    int svgtojson(const std::string &fileName); // Accepting file name as a string
    json nodeToJson(const pugi::xml_node &node);
};

int SvgtoJson::svgtojson(const std::string &fileName)
{
    try
    {
        // Loading the SVG file using PugiXML
        pugi::xml_document doc;
        pugi::xml_parse_result result = doc.load_file(fileName.c_str());

        // Checking for parsing errors
        if (result.status != pugi::xml_parse_status::status_ok)
        {
            cerr << "Failed to parse SVG file. Error description: " << result.description() << endl;
            return 1;
        }

        // Converting the SVG DOM to JSON
        json svgJson = nodeToJson(doc.child("svg"));

        //  Saving the JSON to a file
        ofstream outputFile("output.json");
        outputFile << svgJson.dump(4);
        outputFile.close();
        cout << "Your JSON file has been saved as output.json.\n";
    }
    catch (const exception &e)
    {
        cerr << "An exception occurred: " << e.what() << endl;
        return 1; // Return an error code
    }
    return 0; // Return 0 for success
}

json SvgtoJson::nodeToJson(const pugi::xml_node &node)
{
    json jsonNode;

    // Processing attributes
    for (const pugi::xml_attribute &attr : node.attributes())
    {
        jsonNode[attr.name()] = attr.value();
    }

    // Processing child nodes
    for (const pugi::xml_node &child : node.children())
    {
        jsonNode[child.name()].push_back(nodeToJson(child));
    }

    return jsonNode;
}
#endif