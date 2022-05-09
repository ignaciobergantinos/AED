#include<cassert>
#include<iostream>
//#include<iomanip>
#include<string>
using namespace std::literals;

int main()
{

    // Consigna tp: uso de assert con estos tipos de datos bool,char, unsigned, int, double, y string.

    assert(2==1+1);
    //prueba de tipo de dato bool
    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);
    assert(true or true and false);
    //prueba de tipo de dato double
    assert(2.0==1.0+1.0);
    assert(0.1==1.0/10.0);
    assert(1==1.0);
    assert(2.0==1+1.0);
    assert(2==1+1.0);
    //assert(1.0 == 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';
    //prueba de tipo de dato string
    assert("nacho"s=="na"s+"cho"s);
    assert("nacho"s.length()==5); //length("pacheco")
    assert("a"s == "a"s);

    //Hasta aca llega lo de la clase

    //Pruebas de tipo Char
    assert('a' == 'a');
    assert('o' -32 == 'O');

    // Pruebas de tipo unsigned
    assert(120/10==12);
    assert(5+5 == 10);


}
