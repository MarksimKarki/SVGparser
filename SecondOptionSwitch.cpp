#include <iostream>
#include <fstream>
#include <string>
#include "Menu.cpp"
#include "Creator.cpp"

#include "ConvertingFilestoVectors.cpp"
#include "DynamicFileObject.cpp"
#include "GenerateOutputFile.cpp"
#include "SvgtoJSON.cpp" 
using namespace std;
class second_Option_Switch{
    public:
    int option;
    int flag{0};
    int recSize{}, cirSize{}, elliSize{}, lineSize{}, polySize{}, polygSize{}, pathSize{};
    second_Option_Switch()=default;
    bool check1(int second_Option,Structure &str){
        option=second_Option;
        switch (second_Option)
        {
            case 1:
            {
                recSize = str.Reactangle.size();
                cout << "Number of Rectangles : " << recSize << endl;
            }
            break;

            case 2:
            {
                cirSize = str.Circle.size();
                cout << "Number of Circles : " << cirSize << endl;
            }

            break;
            case 3:
            {
                elliSize = str.Ellipse.size();
                cout << "Number of Ellipse : " << elliSize << endl;
            }

            break;
            case 4:
            {
                lineSize = str.Line.size();
                cout << "Number of Line : " << lineSize << endl;
            }

            break;
            case 5:
            {
                polySize = str.Polyline.size();
                cout << "Number of Polyline : " << polySize << endl;
            }

            break;
            case 6:
            {
                polygSize = str.Polygon.size();
                cout << "Number of Polygon : " << polygSize << endl;
            }

            break;
            case 7:
            {
                pathSize = str.Path.size();
                cout << "Number of Path : " << pathSize << endl;
            }
            break;
            case 8:
            {
                recSize = str.Reactangle.size();
                cirSize = str.Circle.size();
                elliSize = str.Ellipse.size();
                lineSize = str.Line.size();
                polySize = str.Polyline.size();
                polygSize = str.Polygon.size();
                pathSize = str.Path.size();
                cout << "Number of Rectangles : " << recSize << endl;
                cout << "Number of Circles : " << cirSize << endl;
                cout << "Number of Ellipse : " << elliSize << endl;
                cout << "Number of Line : " << lineSize << endl;
                cout << "Number of Polyline : " << polySize << endl;
                cout << "Number of Polygon : " << polygSize << endl;
                cout << "Number of Path : " << pathSize << endl;
            }
            break;
            case 9:
                return false;
                break;

            default:
                cout << "Invalid Option\n";
                break;
        } 
        return true;
    } 
};