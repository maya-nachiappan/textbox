//
//  main.cpp
//  textbox
//
//  Created by maya nachiappan on 11/22/24.
//

#include "textbox.hpp"
#include <iostream>

int main() {
    using namespace UIComponents;

    // Create a default TextBox
    TextBox defaultBox;
    defaultBox.display();

    // Create a TextBox with an initial value
    TextBox explicitBox("Hello, CIS 25!");
    explicitBox.display();

    // Update TextBox value with user input
    std::cout << "Enter a new value for the TextBox: ";
    std::string userInput;
    std::getline(std::cin, userInput); // Read input including spaces

    defaultBox.setValue(userInput);
    defaultBox.display();

    return 0;
}
