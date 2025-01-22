#include <iostream>
#include "system.h"
#include "box.h"

int main()
{
    // Create an instance of the Box using the constructor whose variable were declared in box.h and then implemented to pointer in box.cpp
    Box myBox(10.0, 20.0, 5.0, 5.0);

    //Display intitial sides

    std::cout << "Initial sides: " << myBox.getSidex() << ", " << myBox.getSidey()<< std::endl;




    System model;
    model.updateRule();
    return 0;
}