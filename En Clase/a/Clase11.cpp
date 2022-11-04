#include <iostream>
#include <cassert>

//Distancia: RxR -> R/Distancia(a,b) = abs(a-b)

bool AreNear(double, double, double = 0.001);
double Distancia (double, double);

int main()
{
    assert( AreNear(  Distancia(1,2),  1  ));
    assert( AreNear(  Distancia(1,8),  7  ));
    assert( AreNear(  Distancia(-3,5), 8  ));
    assert( AreNear(  Distancia(15,2), 13 ));
    assert( AreNear(  Distancia(0,2),  2  ));
    assert( AreNear(  Distancia(1,2),  1  ));

    std::cout << "x";
} 

bool AreNear(double value, double secondValue, double tolerance)
{
    return value - tolerance <= secondValue and value + tolerance >= secondValue;
}  

double Distancia (double a, double b)
{
    return abs(a-b);
}