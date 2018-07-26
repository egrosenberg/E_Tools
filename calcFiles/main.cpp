#include "main.h"

int main(int argc, char* argv[])
{
    //declare a vector of doubles that will store each number we are using
    std::vector<double> num;
    
    //for loop that converts each odd argument to a double
    for (int currentArg = 1; currentArg < argc; currentArg += 2)
    {
        if (currentArg % 2 != 0)
        {
            num.push_back (atof (argv[currentArg]));
        }
    }
    
    //declare a vector of chars that will store each operator
    std::vector<char> op;
    
    //for loop that converts each even argument to a char
    for (int currentArg = 2; currentArg < argc; currentArg += 2)
    {
        if (currentArg % 2 == 0)
        {
            op.push_back (argv[currentArg][0]);
        }
    }
    
    
    //4 arguments means one operation
    //"clc", num.at(0), operator, num.at(1)
    if (argc == 4)
    {
        basicCalc* tempCalc = new basicCalc();
        std::cout << tempCalc->solve(num.at(0), num.at(1), op.at(0)) << '\n'; //this line is where the problem lies
    }
    else if (argc == 2)
    {
        complexCalc* tempCalc = new complexCalc();
        std::cout << tempCalc->solve(argv [1]);
    }
    
    return 0;
}
