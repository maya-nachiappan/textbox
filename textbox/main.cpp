//
//  main.cpp
//  textbox
//
//  Created by maya nachiappan on 11/22/24.
//

#include "textbox.hpp"
#include <iostream>

int main() 
{
    UIComponents::TextBox defaultBox; // Calls default constructor
    defaultBox.display();

    UIComponents::TextBox explicitBox("Hello, world!"); // Calls explicit constructor
    explicitBox.display();

    explicitBox.setValue("Updated value");
    explicitBox.display();
    
    return 0;
}
