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

int main()
{
    try
    {
        std::shared_ptr<Structure> str = make_shared<Structure>(Structure::createStructure()); // singleton method
        // Structure str; // this object is used for accessing the deques in Structure class
        FileName fileName("../Testing2.svg");
        Creator cr; // this object  is for  used to create new shapes
        Menu menu;  // this object is used  to display the menu
        ConvertingFilestoVectors cfv;
        GenerateOutputFile outputFile;
        cfv.temporary(fileName.x, *str); // this is used to add the svg tags to their respective deque when the file is loaded
        SvgtoJson svgtojson;

        int option;
        do
        {
            menu.displayMenu();
            cout << "Enter an Option to proceed further: ";
            try
            {
                cin >> option;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
                    throw runtime_error("Invalid input. Please enter a valid numeric option listed below.");
                }

                switch (option)
                {
                case 1:
                {
                    bool condition = true;
                    while (condition)
                    {
                        int second_Option;
                        int groupSize{}, recSize{}, cirSize{}, elliSize{}, lineSize{}, polySize{}, polygSize{}, pathSize{};
                        menu.displayCountMenu();
                        cout << "Select an option to display the count of an element/elements: \n";
                        cin >> second_Option;
                        switch (second_Option)
                        {
                            // Your existing cases
                        case 1:
                        {
                            recSize = (*str).Reactangle.size();
                            cout << "Number of Rectangles : " << recSize << endl;
                        }
                        break;
                        case 2:
                        {
                            cirSize = (*str).Circle.size();
                            cout << "Number of Circles : " << cirSize << endl;
                        }

                        break;
                        case 3:
                        {
                            elliSize = (*str).Ellipse.size();
                            cout << "Number of Ellipse : " << elliSize << endl;
                        }

                        break;
                        case 4:
                        {
                            lineSize = (*str).Line.size();
                            cout << "Number of Line : " << lineSize << endl;
                        }

                        break;
                        case 5:
                        {
                            polySize = (*str).Polyline.size();
                            cout << "Number of Polyline : " << polySize << endl;
                        }

                        break;
                        case 6:
                        {
                            polygSize = (*str).Polygon.size();
                            cout << "Number of Polygon : " << polygSize << endl;
                        }

                        break;
                        case 7:
                        {
                            pathSize = (*str).Path.size();
                            cout << "Number of Path : " << pathSize << endl;
                        }
                        break;
                        case 8:
                        {
                            recSize = (*str).Reactangle.size();
                            cirSize = (*str).Circle.size();
                            elliSize = (*str).Ellipse.size();
                            lineSize = (*str).Line.size();
                            polySize = (*str).Polyline.size();
                            polygSize = (*str).Polygon.size();
                            pathSize = (*str).Path.size();
                            groupSize = (*str).Group.size();
                            cout << "Number of Rectangles : " << recSize << endl;
                            cout << "Number of Circles : " << cirSize << endl;
                            cout << "Number of Ellipse : " << elliSize << endl;
                            cout << "Number of Line : " << lineSize << endl;
                            cout << "Number of Polyline : " << polySize << endl;
                            cout << "Number of Polygon : " << polygSize << endl;
                            cout << "Number of Path : " << pathSize << endl;
                            cout << "Number of Group : " << groupSize << endl;
                        }
                        break;
                        case 9:

                            condition = false;
                            break;

                        default:
                            cout << "Invalid Option\n";
                            break;
                        }
                    }
                }
                break;
                case 2:
                {
                    bool condition = true;
                    while (condition)
                    {
                        int third_Option;
                        menu.displayAddNewElement();
                        cout << "Select an option to add new element: \n";
                        cin >> third_Option;
                        switch (third_Option)
                        {
                            // Your existing cases
                        case 1:
                        {
                            int choice{};
                            cout << "Enter  option 1 to enter the values to attribute :\n";
                            cout << "Enter  option 2 to enter the entire attribute :\n";

                            cin >> choice;
                            if (choice == 1)
                            {
                                (*str).shapes.push_back(cr.createNewRectangle(*str));
                            }
                            else
                            {
                                (*str).shapes.push_back(cr.createNewRectangleAsSingleAttribute(*str));
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
                                (*str).shapes.push_back(cr.createNewCircle(*str));
                            }
                            else
                            {
                                (*str).shapes.push_back(cr.createNewCircleAsSingleAttribute(*str));
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
                                (*str).shapes.push_back(cr.createNewEllipse(*str));
                            }
                            else
                            {
                                (*str).shapes.push_back(cr.createNewEllipseAsSingleAttribute(*str));
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
                                (*str).shapes.push_back(cr.createNewLine(*str));
                            }
                            else
                            {
                                (*str).shapes.push_back(cr.createNewLineAsSingleAttribute(*str));
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
                                (*str).shapes.push_back(cr.createNewPolyline(*str));
                            }
                            else
                            {
                                (*str).shapes.push_back(cr.createNewPolylineAsSingleAttribute(*str));
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
                                (*str).shapes.push_back(cr.createNewPolygon(*str));
                            }
                            else
                            {
                                (*str).shapes.push_back(cr.createNewPolygonAsSingleAttribute(*str));
                            }
                        }

                        break;
                        case 7:
                        {
                            // str.shapes.push_back(cr.createNewPath(str));
                            //   int choice{};
                            // cout<<"Enter a option:\n";
                            // cin>>choice;

                            (*str).shapes.push_back(cr.createNewPathAsSingleAttribute(*str));
                        }

                        break;
                        case 8:

                            condition = false;
                            break;

                        default:
                            cout << "Invalid Option\n";

                            break;
                        }
                    }
                }
                break;
                    // case 3:
                    // {
                    //     cout << "IMPLEMENT CREATE NEW SVG FILE\n";
                    //     // outputFile.createOutputFile(str);
                    // }
                    // break;

                default:
                    break;
                }
            }
            catch (const exception &e)
            {
                cerr << "Error: " << e.what() << endl;
            }
        } while (option != 3);
        FileName outfileName("C:\\Nithish_Anand\\Home_SVG_Parser\\output\\Output.svg");

        if (outputFile.createOutputFile(*str))
            svgtojson.svgtojson(outfileName.x); // passing the outputs svg file to be converted to json
    }
    catch (const exception &e)
    {
        cerr << "An exception occurred: " << e.what() << endl;
    }

    return 0;
}
