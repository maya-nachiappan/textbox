//
//  textbox.hpp
//  textbox
//
//  Created by maya nachiappan on 11/22/24.
//

#ifndef textbox_hpp
#define textbox_hpp

#include <stdio.h>

#include <string>

namespace UIComponents {

class TextBox {
private:
    std::string value;

public:
    // Default constructor
    TextBox();

    // Explicit constructor that takes a string
    explicit TextBox(const std::string& initialValue);

    // Getter for the value attribute
    std::string getValue() const;

    // Setter for the value attribute
    void setValue(const std::string& newValue);

    // Method to display the current value
    void display() const;
};

} // namespace UIComponents

#endif /* textbox_hpp */
