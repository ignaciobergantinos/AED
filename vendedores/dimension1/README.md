# Dimension 1
Necesidad #2: Dado los importes y meses (de 0 a 11), mostrar ventas totales
por mes.

## 15.3. Problema
Esta es una serie de problemas que parten de una necesidad general: “Dado
los importes, mostrar las ventas totales”, y que después se particulariza en
necesidades puntuales:

### 15.4. Restricciones
Se deben crear archivos con set de datos de diferentes para la solución:
* Test1.txt

Los datos se extraen de cin, no vienen en ningún orden en particular, los
importes son enteros, el resultado se envía a cout
* Aplicar std::array<T,N> y no T[N].
* Aplicar operación •.at(•) y no •[•].

* Total de importes: Presentar el total de importes, usando las siguientes soluciones

Soluciones posibles a la necesidad #2:
▪ 12 variables enteras (cero dimensiones, no aprovecha patrón)
▪ ★ 1 variable arreglo de 12 enteros (una dimensión, aprovecha patrón)

La solución está en el siguiente archivo fuente:
◦ Dim1.cpp

## 15.5. Tareas
Por cada necesidad:
1. Diseñar el set de datos para la prueba.
2. Implementar la solución.
3. Ejecutar la solución con redirección de la entrada para que lea del set de
datos de prueba. Por ejemplo: ./Dim0 < Test0.txt
