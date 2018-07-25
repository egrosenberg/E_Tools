#ifndef BASICCALC_H
#define BASICCALC_H

#include "main.h"

class basicCalc
{
public:

    basicCalc();
    
    double solve(double in1, double in2, char op);
    
    virtual ~basicCalc();
private:
    int factorial(int in);
  
};


#endif
