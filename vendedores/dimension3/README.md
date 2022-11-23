# Dimension 3 
## 15.3. Problema
Esta es una serie de problemas que parten de una necesidad general: “Dado
los importes, mostrar las ventas totales”, y que después se particulariza en
necesidades puntuales:

* Necesidad #4: Dado los importes, meses, números de los tres vendedores, y
números de las cuatro regiones (0, 1, 2, 4), mostrar total de ventas por mes,
vendedor, y región.

## 15.4. Restricciones
Se deben crear archivos con set de datos de diferentes para cada solución:
* Test3.txt

Los datos se extraen de cin, no vienen en ningún orden en particular, los
importes son enteros, el resultado se envía a cout
* Aplicar std::array<T,N> y no T[N].
* Aplicar operación •.at(•) y no •[•].
* Total de importes: Las cuatro necesidades rondan en presentar el total de
importes, hay varias soluciones posibles, las que se deben implementar son
las que usan una única variable de múltiples dimensiones, son las que están
marcadas con una estrella (★) a continuación.

### Restricciones

* Soluciones posibles a la necesidad #4:
▪ 144 variables enteras
▪ 12 variables arreglo de 12 enteros
▪ 4 variables arreglos de 3 arreglos de 12 enteros
▪ ★ 1 variable arreglo de 4 arreglos de 3 arreglos de 12 enteros (tres
dimensiones)

* Cada solución debe estar en archivos fuente diferentes:
◦ Dim3.cpp

## 15.5. Tareas
Por cada necesidad:
1. Diseñar el set de datos para la prueba.
2. Implementar la solución.
3. Ejecutar la solución con redirección de la entrada para que lea del set de
datos de prueba. Por ejemplo: ./Dim0 < Test0.txt

 