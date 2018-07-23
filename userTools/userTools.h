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
        
        void addUser(std::string name, std::string pass, std::string status);
        void delUser(std::string name);
        void enableUser(std::string name, bool enable);
        
        virtual ~userTools();
    private:
};

#endif