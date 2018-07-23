/*
 *userTools.cpp
 *purpose: userTools class implimentation
 *
 *Author: Ethan Rosenberg
 *Date: 07222018
*/

#include "userTools.h"

//Constructor
userTools::userTools()
{
    
}

void userTools::addUser(std::string name, std::string pass, std::string status)
{
    //Create a user with the desired name
    system (("NET USER " +name+ " " +pass+ " /ADD").c_str());
    //Let user know that the account was successfully created
    std::cout << "Accout successfully added\n";
    
    //If the the status assigned is admin then set the user to admin
    if (status == "admin")
    {
        system (("NET LOCALGROUP administrators " +name+ " /ADD").c_str());
        //Let user know that the account was set to admin
        std::cout << "Account set to administrator\n";
    }
}

void userTools::addUser(std::string name, std::string pass)
{
    //Create a user with the desired name
    system (("NET USER " +name+ " " +pass+ " /ADD").c_str());
    //Let user know that the account was successfully created
    std::cout << "Accout successfully added\n";
}

void userTools::delUser(std::string name)
{
    //Delete the named user
    system (("NET USER " +name+  " /DEL").c_str());
    //Let user know that the account was deleted
    std::cout << "Account successfully deleted\n";
}

void userTools::enableUser(std::string name, std::string enable)
{
    //Enable or disable the named user
    if (enable == "yes")
    {
        system (("net user " +name+ " /active:yes").c_str());
        //Let user know the account was enabled
        std::cout << "Account successfully enabled\n";
    }
    else if (enable == "no")
    {
        system (("net user " +name+ " /active:no").c_str());
        //Let user know the account was disabled
        std::cout << "Acount successfully disabled\n";
    }
    else
    {
        std::cout << "ERROR INCORRECT SYNTAX \n visit" <<
            "https://github.com/egrosenberg/E_Tools for more information";
    }
}

userTools::~userTools()
{
    
}
