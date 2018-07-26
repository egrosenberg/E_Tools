#include "complexCalc.h"

complexCalc::complexCalc()
{
    //m_calc = new basicCalc();
}

double complexCalc::solve(std::string in)
{
    double ans = 0;
    
    if (in[0] != '(')
    {
        return 1;
    }
    
    return ans;
}

complexCalc::~complexCalc()
{
    //delete m_calc;
}
