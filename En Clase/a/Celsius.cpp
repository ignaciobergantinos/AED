#include <cassert>
#include <iostream>
#include <string>

using namespace std::literals;
using namespace std;

bool AreNear(double, double, double = 0.001); 
double Celsius(double);

int main()
{
    assert(AreNear( 1, 2, 1));
    assert(AreNear( 7.1, 7, 0.1));
    assert(AreNear( 10.01, 10.03, 0.05));
    assert(AreNear( 4.55, 4.65, 0.5));
    assert(AreNear( 3.14, 3.1415, 0.01));
    assert(0==Celsius(32));
    assert(AreNear(Celsius(57.8), 14.3, 0.1));
    assert(AreNear(Celsius(-14), -25.55, 0.1));

    /*cout << "Ingrese una temperatura en grados fahrenheit"s;
    double temp;
    cin >> temp;
    cout << "La temperatura en Celsius es: " << Celsius(temp);
     */
}   

double Celsius (double f){
    return  (f -32)*5.0/9.0;
}


bool AreNear(double value, double secondValue, double tolerance)
{
    return value - tolerance <= secondValue and value + tolerance >= secondValue;
}  