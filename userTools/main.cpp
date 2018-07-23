/*
 *main.cpp
 *purpose: main implimentation file
 *
 *Author: Ethan Rosenberg
 *Date: 07222018
*/

#include "main.h"


int main(int argc, char* argv[])
{
    //Declare a userTools Object
    userTools* mainTool  = new userTools();
    
    //Make a string command equal to second argument which will always be command
    std::string command = argv[1];
    
    //5 arguments will always be add user with localgroup and in this order:
    //"uTools", Commmand, Name, Pass, localgroup
    if (argc == 5)
    {
        //Check to make sure it is the add command
        if (command == "add")
        {
            mainTool->addUser(argv[2], argv[3], argv[4]);
            return 0;
        }
    }
    //4 arguments is either enable or add without localgroup and in this order:
    //"uTools", Command, Name, Pass
    //or
    //"uTools", Command, Name, Enabled
    else if (argc == 4)
    {
        //if command is add use add user command
        if (command == "add")
        {
            mainTool->addUser(argv[2], argv[3]);
            return 0;
        }
        //if command is enable use enable command
        if (command == "enable")
        {
            mainTool->enableUser(argv[2], argv[3]);
            return 0;
        }
    }
    //3 arguments will always be del and in this order:
    //"uTools", Command, name
    else if(argc == 3)
    {
        //Check to make sure it is the del command
        if (command == "del")
        {
            mainTool->delUser(argv [2]);
            return 0;
        }
    }
    //If it hasn't returned by now show an error message
    else
    {
        std::cout << "ERROR INCORRECT SYNTAX \n visit" <<
            "https://github.com/egrosenberg/E_Tools for more information";
        return 1;
    }
}
