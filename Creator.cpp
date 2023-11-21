#include <iostream>
#include <string>
#include "Path.cpp"
#include "pugixml.cpp"

using namespace std;

bool isNumeric(const std::string &str)
{
    for (char c : str)
    {
        if (!std::isdigit(c))
        {
            return false;
        }
    }
    return true;
}
class Creator
{
public:
    // Rectangle createNewRectangle(Structure &str)

    // {
    //     std::string width{}, height{}, style{};
    //     std::cout << "Rectangle\n";
    //     cout << "Enter width: ";
    //     cin >> width;
    //     cout << "\nEnter height: ";
    //     cin >> height;
    //     cout << "\nEnter style ";
    //     cin >> style;

    //     string rectangleElement = "<rect width=\"" + width + "\" height=\"" + height + "\" style=\"" + style + "\"/>";
    //     pugi::xml_document doc;
    //     pugi::xml_parse_result result = doc.load_string(rectangleElement.c_str());

    //     if (result)
    //     {
    //         str.Reactangle.push_back(rectangleElement);
    //         cout<<rectangleElement;
    //         return Rectangle(width, height, style);

    //     }
    //     else
    //     {
    //         std::cerr << "User input is not a valid SVG tag. Error description: " << result.description() << std::endl;
    //     }
    // }
    Rectangle createNewRectangle(Structure &str)
    {
        std::string width, height, style;
        std::cout << "Rectangle\n";
        cout << "Enter width: ";
        cin >> width;

        // Validate the height input
        cout << "\nEnter height: ";
        cin >> height;
        if (!isNumeric(height))
        {
            std::cerr << "Error: Height must be a numeric value." << std::endl;
            // Handle the error as needed. Here, we return an invalid Rectangle object.
            return Rectangle("", "", "");
        }

        cout << "\nEnter style: ";
        cin >> style;

        string rectangleElement = "<rect width=\"" + width + "\" height=\"" + height + "\" style=\"" + style + "\"/>";
        pugi::xml_document doc;
        pugi::xml_parse_result result = doc.load_string(rectangleElement.c_str());

        if (result)
        {
            str.Reactangle.push_back(rectangleElement);
            return Rectangle(width, height, style);
        }
        else
        {
            std::cerr << "User input is not a valid SVG tag. Error description: " << result.description() << std::endl;
            // Handle the error as needed. Here, we return an invalid Rectangle object.
            return Rectangle("", "", "");
        }
    }
    Rectangle createNewRectangleAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of rectangle:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string rectangleElement = "<rect " + attributes + " />";
        str.Reactangle.push_back(rectangleElement);
        return Rectangle(attributes);
    }
    // Circle createNewCircle(Structure &str)
    // {
    //     string cx, cy, r, stroke, strokewidth, fill;
    //     cout << "Enter cx:\n";
    //     cin >> cx;
    //     cout << "Enter cy:\n";
    //     cin >> cy;
    //     cout << "Enter r:\n";
    //     cin >> r;
    //     cout << "Enter stroke:\n";
    //     cin >> stroke;
    //     cout << "Enter strokewidth:\n";
    //     cin >> strokewidth;
    //     cout << "Enter fill:\n";
    //     cin >> fill;
    //     string circleElement = "<circle cx=\"" + cx + "\" cy=\"" + cy + "\" r=\"" + r + "\" stroke=\"" + stroke + "\" stroke-width=\"" + strokewidth + "\" fill=\"" + fill + "\" />";
    //     str.Circle.push_back(circleElement);
    //     return Circle(cx, cy, r, stroke, strokewidth, fill);
    // }
    Circle createNewCircle(Structure &str)
    {
        std::string cx, cy, r, stroke, strokewidth, fill;
        std::cout << "Circle\n";
        cout << "Enter cx: ";
        cin >> cx;

        // Validate the cx input
        if (!isNumeric(cx))
        {
            std::cerr << "Error: cx must be a numeric value." << std::endl;
            return Circle("", "", "", "", "", "");
        }

        cout << "Enter cy: ";
        cin >> cy;

        // Validate the cy input
        if (!isNumeric(cy))
        {
            std::cerr << "Error: cy must be a numeric value." << std::endl;
            return Circle("", "", "", "", "", "");
        }

        cout << "Enter r: ";
        cin >> r;

        // Validate the r input
        if (!isNumeric(r))
        {
            std::cerr << "Error: r must be a numeric value." << std::endl;
            return Circle("", "", "", "", "", "");
        }

        cout << "Enter stroke: ";
        cin >> stroke;
        cout << "Enter stroke-width: ";
        cin >> strokewidth;
        cout << "Enter fill: ";
        cin >> fill;

        string circleElement = "<circle cx=\"" + cx + "\" cy=\"" + cy + "\" r=\"" + r + "\" stroke=\"" + stroke + "\" stroke-width=\"" + strokewidth + "\" fill=\"" + fill + "\" />";
        pugi::xml_document doc;
        pugi::xml_parse_result result = doc.load_string(circleElement.c_str());

        if (result)
        {
            str.Circle.push_back(circleElement);
            return Circle(cx, cy, r, stroke, strokewidth, fill);
        }
        else
        {
            std::cerr << "User input is not a valid SVG tag. Error description: " << result.description() << std::endl;
            return Circle("", "", "", "", "", "");
        }
    }
    Circle createNewCircleAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of Circle:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string circleElement = "<circle " + attributes + " />";
        str.Circle.push_back(circleElement);
        return Circle(attributes);
    }
    // Ellipse createNewEllipse(Structure &str)
    // {
    //     string cx, cy, rx, ry, style;
    //     cout << "Enter cx:\n";
    //     cin >> cx;
    //     cout << "Enter cy:\n";
    //     cin >> cy;
    //     cout << "Enter rx:\n";
    //     cin >> rx;
    //     cout << "Enter ry:\n";
    //     cin >> ry;
    //     cout << "Enter style:\n";
    //     cin >> style;
    //     string ellipseElement = "<ellipse cx=\"" + cx + "\" cy=\"" + cy + "\" rx=" + rx + "\" ry=\"" + ry + "\"style=\"" + style + "\"/>";
    //     str.Ellipse.push_back(ellipseElement);
    //     return Ellipse(cx, cy, rx, ry, style);
    // }
    Ellipse createNewEllipse(Structure &str)
    {
        string cx, cy, rx, ry, style;
        cout << "Enter cx:\n";
        cin >> cx;
        cout << "Enter cy:\n";
        cin >> cy;

        // Validate the input for rx (x-radius)
        cout << "Enter rx:\n";
        cin >> rx;
        if (!isNumeric(rx))
        {
            cerr << "Error: rx must be a numeric value." << endl;
            // Handle the error as needed. Here, we return an invalid Ellipse object.
            return Ellipse("", "", "", "", "");
        }

        // Validate the input for ry (y-radius)
        cout << "Enter ry:\n";
        cin >> ry;
        if (!isNumeric(ry))
        {
            cerr << "Error: ry must be a numeric value." << endl;
            // Handle the error as needed. Here, we return an invalid Ellipse object.
            return Ellipse("", "", "", "", "");
        }

        cout << "Enter style:\n";
        cin >> style;

        string ellipseElement = "<ellipse cx=\"" + cx + "\" cy=\"" + cy + "\" rx=\"" + rx + "\" ry=\"" + ry + "\" style=\"" + style + "\"/>";
        str.Ellipse.push_back(ellipseElement);
        return Ellipse(cx, cy, rx, ry, style);
    }

    Ellipse createNewEllipseAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of Ellipse:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string ellipseElement = "<ellipse " + attributes + " />";
        str.Ellipse.push_back(ellipseElement);
        return Ellipse(attributes);
    }
    // Line createNewLine(Structure &str)
    // {
    //     string x1, y1, x2, y2, style;
    //     cout << "Enter x1:\n";
    //     cin >> x1;
    //     cout << "Enter y1:\n";
    //     cin >> y1;
    //     cout << "Enter x2:\n";
    //     cin >> x2;
    //     cout << "Enter y2:\n";
    //     cin >> y2;
    //     cout << "Enter style:\n";
    //     cin >> style;
    //     string lineElement = "<line x1=\"" + x1 + "\" y1=\"" + y1 + "\" x2=\"" + x2 + "\" y2=\"" + y2 + "\"style=" + style + "\" />";
    //     str.Line.push_back(lineElement);
    //     return Line(x1, y1, x2, y2, style);
    // }
    Line createNewLine(Structure &str)
    {
        string x1, y1, x2, y2, style;
        cout << "Enter x1:\n";
        cin >> x1;

        // Validate the input for y1 (y-coordinate of the first point)
        cout << "Enter y1:\n";
        cin >> y1;
        if (!isNumeric(y1))
        {
            std::cerr << "Error: y1 must be a numeric value." << std::endl;
            // Handle the error as needed. Here, we return an invalid Line object.
            return Line("", "", "", "", "");
        }

        cout << "Enter x2:\n";
        cin >> x2;

        // Validate the input for y2 (y-coordinate of the second point)
        cout << "Enter y2:\n";
        cin >> y2;
        if (!isNumeric(y2))
        {
            std::cerr << "Error: y2 must be a numeric value." << std::endl;
            // Handle the error as needed. Here, we return an invalid Line object.
            return Line("", "", "", "", "");
        }

        cout << "Enter style:\n";
        cin >> style;

        string lineElement = "<line x1=\"" + x1 + "\" y1=\"" + y1 + "\" x2=\"" + x2 + "\" y2=\"" + y2 + "\" style=\"" + style + "\" />";
        str.Line.push_back(lineElement);
        return Line(x1, y1, x2, y2, style);
    }

    Line createNewLineAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of Line:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string lineElement = "<line " + attributes + " />";
        str.Line.push_back(lineElement);
        return Line(attributes);
    }
    // Polygon createNewPolygon(Structure &str)
    // {

    //     string points, style;
    //     cout << "Enter points:\n";
    //     cin.ignore();
    //     getline(cin, points, '\n');
    //     // cin >> points;
    //     cout << "Enter style:\n";
    //     // cin >> style;
    //     getline(cin, style, '\n');
    //     string polygonElement = "<polygon points=\"" + points + "\" style=\"" + style + "\" />";

    //     str.Polygon.push_back(polygonElement);

    //     return Polygon(points, style);
    // }
    Polygon createNewPolygon(Structure &str)
    {
        string points, style;
        cout << "Enter points:\n";
        cin.ignore();
        getline(cin, points, '\n');

        cout << "Enter style:\n";
        getline(cin, style, '\n');

        // Validate points and style inputs
        if (points.empty() || style.empty())
        {
            std::cerr << "Error: Points and style must not be empty." << std::endl;
            // Handle the error as needed. Here, we return an invalid Polygon object.
            return Polygon("", "");
        }

        string polygonElement = "<polygon points=\"" + points + "\" style=\"" + style + "\" />";
        str.Polygon.push_back(polygonElement);
        return Polygon(points, style);
    }

    Polygon createNewPolygonAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of Line:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string PolygonElement = "<polygon " + attributes + " />";
        str.Polygon.push_back(PolygonElement);
        return Polygon(attributes);
    }
    // Polyline createNewPolyline(Structure &str)
    // {
    //     string points, style;
    //     cin.ignore();
    //     cout << "Enter points:\n";
    //     getline(cin, points);
    //     // cin >> points;
    //     cout << "Enter style:\n";
    //     getline(cin, style);
    //     string polylineElement = "<polyline points=\"" + points + "\" style=" + style + " />";
    //     str.Polyline.push_back(polylineElement);
    //     return Polyline(points, style);
    // }
    Polyline createNewPolyline(Structure &str)
    {
        string points, style;
        cout << "Enter points:\n";
        cin.ignore();
        getline(cin, points);

        cout << "Enter style:\n";
        getline(cin, style);

        // Validate points and style inputs
        if (points.empty() || style.empty())
        {
            std::cerr << "Error: Points and style must not be empty." << std::endl;
            // Handle the error as needed. Here, we return an invalid Polyline object.
            return Polyline("", "");
        }

        string polylineElement = "<polyline points=\"" + points + "\" style=\"" + style + "\" />";
        str.Polyline.push_back(polylineElement);
        return Polyline(points, style);
    }

    Polyline createNewPolylineAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of Line:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string PolylineElement = "<line " + attributes + " />";
        str.Polyline.push_back(PolylineElement);
        return Polyline(attributes);
    }
    // Path createNewPath(Structure &str)
    // {
    //     string d;
    //     cout << "Enter d:\n";
    //     cin.ignore(); // Clear the newline left in the buffer
    //     getline(cin, d);
    //     // cout << d;
    //     string lineElement = "<path d=\"" + d + "\"/>";
    //     str.Path.push_back(lineElement);
    //     return Path(d);
    // }
    Path createNewPath(Structure &str)
    {
        string d;
        cout << "Enter d:\n";
        cin.ignore(); // Clear the newline left in the buffer
        getline(cin, d);

        // Validate the 'd' input
        if (d.empty())
        {
            std::cerr << "Error: 'd' must not be empty." << std::endl;
            // Handle the error as needed. Here, we return an invalid Path object.
            return Path("");
        }

        string pathElement = "<path d=\"" + d + "\"/>";
        str.Path.push_back(pathElement);
        return Path(d);
    }

    Path createNewPathAsSingleAttribute(Structure &str)
    {
        std::string attributes;
        cout << "Enter the attributes of Path like d, fill, ect..:\n";
        // cin>>attributes;
        cin.ignore();
        getline(cin, attributes);
        string pathElement = "<path " + attributes + " />";
        str.Path.push_back(pathElement);
        return Path(attributes);
    }
};
