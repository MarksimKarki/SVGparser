#include <iostream>
#include "pugixml.cpp"

int main() {
    std::string userInput;

    // Prompt the user to enter an SVG tag
    std::cout << "Enter an SVG tag: ";
    std::getline(std::cin, userInput);

    // Create a temporary XML document to parse the user input
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_string(userInput.c_str());

    if (result) {
        // The user input is a valid SVG tag
        std::cout << "User input is a valid SVG tag." << std::endl;
    } else {
        // The user input is not a valid SVG tag; print the error description
        std::cerr << "User input is not a valid SVG tag. Error description: " << result.description() << std::endl;
    }

    return 0;
}
