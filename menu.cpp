
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Menu
{
public:
    void displayMenu();
    void displayCountMenu();
    void displayAddNewElement();
};

void Menu::displayMenu()
{
    cout << endl;
    cout << setw(40) << setfill('*') << "\n";
    cout << setw(25) << setfill(' ') << "SVG PARSER\n";
    cout << setw(40) << setfill('*') << "\n";
    cout << "\t1.Count Number of Elements: \n";
    cout << "\t2.Add new element: \n";
    // cout << "\t3.Create a new SVG File \n";
    cout << "\t3.EXIT\n";
}

void Menu::displayCountMenu()
{
    cout << "===========COUNT MENU===========\n";
    cout << "\t1.Display RECTANGLE count\n";
    cout << "\t2.Display CIRCLE count\n";
    cout << "\t3.Display ELLIPSE count\n";
    cout << "\t4.Display LINE count\n";
    cout << "\t5.Display POLYLINE count\n";
    cout << "\t6.Display POLYGON count\n";
    cout << "\t7.Display PATH count\n";
    cout << "\t8.Display ALL count\n";
    cout << "\t9.EXIT\n";
}

void Menu::displayAddNewElement()
{
    cout << "SELECT AN OPTION TO ADD NEW ELEMENT \n";
    cout << "\t1. RECTANGLE\n";
    cout << "\t2. CIRCLE\n";
    cout << "\t3. ELLIPSE\n";
    cout << "\t4. LINE\n";
    cout << "\t5. POLYLINE\n";
    cout << "\t6. POLYGON\n";
    cout << "\t7. PATH\n";
    cout << "\t8. EXIT\n";
}
