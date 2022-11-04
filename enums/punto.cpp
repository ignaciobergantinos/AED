#include <iostream>
#include <cassert>
#include <array>

struct Punto {double x,y;};     //no ocupa memoria

/*
using PuntoA = std::array<double, 2>;
PuntoA origen{0,0};
Punto otroOrigen{0,0};
std::array<double, 2> otroOrigenMas{0,0};
*/

//enum Posicion{cuadrante1, cuadrante2, cuadrante3, cuadrante4, ejeX, ejeY, Origen};   //Conjunto de valores
enum struct Posicion{cuadrante1, cuadrante2, cuadrante3, cuadrante4, ejeX, ejeY, Origen};   //solo con estos valores


//using enum Posicion;

Posicion CuadrantePosicion(Punto);

int main(){
    //assert(sizeof origen==sizeof(PuntoA));
    //assert(sizeof otroOrigen==sizeof(Punto));

    
    assert(CuadrantePosicion({0.0 , 0.0})   == Posicion::Origen);

    assert(CuadrantePosicion({7,5})   ==  Posicion::cuadrante1);
    assert(CuadrantePosicion({7.0,0.0})   ==  Posicion::ejeX);
    
/*
    assert(CuadrantePosicion({8.0,2.0})   ==  cuadrante1);
    assert(CuadrantePosicion({3.5,7.0}) ==  cuadrante1);
    assert(CuadrantePosicion({9.0,254.0}) ==  cuadrante1);

    assert(CuadrantePosicion({-4.0,2.0})  ==  cuadrante2);
    assert(CuadrantePosicion({-50.0,10.4})==  cuadrante2);

    assert(CuadrantePosicion({-4.0,-7.0}) ==  cuadrante3);
    assert(CuadrantePosicion({-1.0,-80.0})==  cuadrante3);

    assert(CuadrantePosicion({7.0,-17.2})==  cuadrante4);
    assert(CuadrantePosicion({2.0,-10.9})==  cuadrante4);
   */
  std::cout << ":D";
}

Posicion CuadrantePosicion(Punto p){
    return  p.x > 0 and p.y > 0 ? Posicion::cuadrante1: 
            p.x < 0 and p.y > 0 ? Posicion::cuadrante2: 
            p.x < 0 and p.y < 0 ? Posicion::cuadrante3: 
            p.x > 0 and p.y < 0 ? Posicion::cuadrante4: 
            p.x != 0 and p.y == 0 ? Posicion::ejeX    : 
            p.x == 0 and p.y != 0 ? Posicion::ejeY    :   Posicion::Origen;
             
            

}   