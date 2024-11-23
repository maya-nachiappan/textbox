//
//  textbox.cpp
//  textbox
//
//  Created by maya nachiappan on 11/22/24.
//

#include "textbox.hpp"
#include <iostream>

namespace UIComponents 
{

// Default constructor
TextBox::TextBox() : value("") {}

// Explicit constructor
TextBox::TextBox(const std::string& initialValue) : value(initialValue) {}

// Getter for the value attribute
std::string TextBox::getValue() const {
    return value;
}

// Setter for the value attribute
void TextBox::setValue(const std::string& newValue) {
    value = newValue;
}

// Method to display the current value
void TextBox::display() const {
    std::cout << "TextBox Value: " << value << std::endl;
}

} // namespace UIComponents
