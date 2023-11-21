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
class third_Option_Switch{
    public:
    int option;
    int flag{0};

        third_Option_Switch()=default;

    bool check(int third_Option,Creator &cr,Structure &str){
        switch (third_Option)
        {
            case 1:
            {
                int choice{};
                cout << "Enter  option 1 to enter the values to attribute :\n";
                cout << "Enter  option 2 to enter the entire attribute :\n";

                cin >> choice;
                if (choice == 1)
                {
                    str.shapes.push_back(cr.createNewRectangle(str));
                }
                else
                {
                    str.shapes.push_back(cr.createNewRectangleAsSingleAttribute(str));
                }
            }

            break;
            case 2:
            {
                int choice{};
                cout << "Enter  option 1 to enter the values to attribute :\n";
                cout << "Enter  option 2 to enter the entire attribute :\n";
                cin >> choice;
                if (choice == 1)
                {
                    str.shapes.push_back(cr.createNewCircle(str));
                }
                else
                {
                    str.shapes.push_back(cr.createNewCircleAsSingleAttribute(str));
                }
                // str.shapes.push_back(cr.createNewCircle(str));
            }

            break;
            case 3:
            {
                int choice{};
                cout << "Enter  option 1 to enter the values to attribute :\n";
                cout << "Enter  option 2 to enter the entire attribute :\n";
                cin >> choice;
                if (choice == 1)
                                    {
                    str.shapes.push_back(cr.createNewEllipse(str));
                }
                else
                {
                    str.shapes.push_back(cr.createNewEllipseAsSingleAttribute(str));
                }
            }

            break;
            case 4:
            {
                int choice{};
                cout << "Enter  option 1 to enter the values to attribute :\n";
                cout << "Enter  option 2 to enter the entire attribute :\n";
                cin >> choice;
                if (choice == 1)
                {
                    str.shapes.push_back(cr.createNewLine(str));
                }
                else
                {
                    str.shapes.push_back(cr.createNewLineAsSingleAttribute(str));
                }
            }

            break;
            case 5:
            {
                int choice{};
                cout << "Enter  option 1 to enter the values to attribute :\n";
                cout << "Enter  option 2 to enter the entire attribute :\n";
                cin >> choice;
                if (choice == 1)
                {
                    str.shapes.push_back(cr.createNewPolyline(str));
                }
                else
                {
                    str.shapes.push_back(cr.createNewPolylineAsSingleAttribute(str));
                }
            }

            break;
            case 6:
            {
                int choice{};
                cout << "Enter  option 1 to enter the values to attribute :\n";
                cout << "Enter  option 2 to enter the entire attribute :\n";
                cin >> choice;
                if (choice == 1)
                {
                    str.shapes.push_back(cr.createNewPolygon(str));
                }
                else
                {
                    str.shapes.push_back(cr.createNewPolygonAsSingleAttribute(str));
                }
            }

            break;
            case 7:
            {
                // str.shapes.push_back(cr.createNewPath(str));
                //   int choice{};
                // cout<<"Enter a option:\n";
                // cin>>choice;

                str.shapes.push_back(cr.createNewPathAsSingleAttribute(str));
            }

            break;
            case 8:
                return false;
                break;

            default:
                cout << "Invalid Option\n";
                break;
        }
        return true;
    }
};