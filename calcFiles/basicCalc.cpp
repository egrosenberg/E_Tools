#include "basicCalc.h"

basicCalc::basicCalc()
{
    
}

double basicCalc::solve(double in1, double in2, char op)
{
    double ans;
    switch (op)
    {
        case '+':
            ans = in1 + in2;
            break;
        case '-':
            ans = in1 - in2;
            break;
        case 'x':
            ans = in1 * in2;
            break;
        case '/':
            ans = in1 / in2;
            break;
        case '^':
            ans = pow(in1, in2);
            break;
        case '!':
            ans = factorial((int)in1);
            break;
        default:
            ans = 1;
            std::cout << "bad num \n";
            return 1;
    }
    return ans;
}

int basicCalc::factorial(int in)
{
    int total = 1;
    for (int loopCount = in; loopCount > 0; loopCount--)
    {
        total *= loopCount;
    }
    return total;
}

basicCalc::~basicCalc()
{
    
}