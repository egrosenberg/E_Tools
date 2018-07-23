/*
 *main.cpp
 *purpose: main implimentation file
 *
 *Author: Ethan Rosenberg
 *Date: 07222018
*/

#include "main.h"

int main()
{
    //Declare a userTools Object
    userTools* mainTool  = new userTools();
    
    //Declare Variables
    std::string command;
    std::string name;
    std::string pass;
    std::string status;
    bool enabled;
    
    //Take user input for command and account name
    std::cin >> command;
    std::cin >> name;
    
    //If statements for each commands
    if (command == "add")
    {
        std::cin >> pass;
        std::cin >> status;
        mainTool->addUser(name, pass, status);
    }
    else if (command == "del")
    {
        mainTool->delUser(name);
    }
    else if (command == "enable")
    {
        std::cin >> enabled;
        mainTool->enableUser(name, enabled);
    }
    else
    {
        std::cout << "incorrect input!!! \n"; 
    }
    
    return 0;
}
