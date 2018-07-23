#include <iostream>
#include <cmath>


double add(double in1, double  in2)
{
    return in1 + in2;
}

double subtract(double in1, double in2)
{
    return in1 - in2;
}

double divide(double in1, double in2)
{
    return in1 / in2;
}

double multiply(double in1, double in2)
{
    return in1 * in2;
}

double exponent(double in1, double in2)
{
    return pow(in1, in2);
}

double modulo(double in1, double in2)
{
    return (int)in1 % (int)in2;
}

double factorial(double in)
{
    int total;
    for (int loopCount = (int)in; loopCount > 0; loopCount--)
    {
        total *= loopCount;
    }
    return (double)total;
}

int main()
{
    bool loop = 1;

    while (loop)
    {
        double num1, num2;
        char sign;
    
        std::cin >> num1 >> sign >> num2;
    
        switch (sign)
        {
            case '+':
                std::cout << add(num1, num2) << '\n';
                break;
            case '-':
                std::cout << subtract(num1, num2) << '\n';
                break;
            case '*':
                std::cout << multiply(num1, num2) << '\n';
                break;
            case '/':
                std::cout << divide(num1, num2) << '\n';
                break;
            case '^':
                std::cout << exponent(num1, num2) << '\n';
                break;
            case '!':
                std::cout << factorial(num1) << '\n';
                break;
            default:
                std::cout << "bad input \n";
                return 1;
        }
    }
    
    return 0;
}
