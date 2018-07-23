/*
 *userTools.h
 *purpose: header file for  user tools class
 *
 *Author: Ethan Rosenberg
 *Date: 07222018
*/

#ifndef USERTOOLS_H
#define USERTOOLS_H

#include "main.h"

class userTools
{
    public:
        userTools();
        
        //Add user with a status
        void addUser(std::string name, std::string pass, std::string status);
        //Add a user with no status
        void addUser(std::string name, std::string pass);
        //Delete a User
        void delUser(std::string name);
        //Enable or disable a user
        void enableUser(std::string name, bool enable);
        
        virtual ~userTools();
    private:
};

#endif