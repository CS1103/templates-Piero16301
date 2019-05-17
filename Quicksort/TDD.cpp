#include <iostream>
#include "catch.hpp"
#include "Sort.h"

using namespace std;

SCENARIO("Ordenamiento de array") {
    GIVEN("Caso 1: Array de 6 elementos") {
        WHEN("Se inicializa el array con los elementos") {
            int array[] = {10,7,8,9,1,5};
            int n = sizeof(array) / sizeof(array[0]);
            QuickSort(array, 0, n-1);
            impimirLista(array, n);
            THEN("Lista ordenada") {
                //REQUIRE( == "1 5 7 8 9 10");
            }
        }
    }

    GIVEN("Caso 2: De varias cargas hacia un punto") {
        WHEN("Se establece el valor de las 3 cargas, su posicion en X y su posicion en Y") {
            Carga carga1(23.78,3.45,5.89);
            Carga carga2(22.78,4.45,6.89);
            Carga carga3(21.78,5.45,7.89);
            //Punto sobre el que actua las cargas
            double x=1.23,y=2.39;
            vector <Carga> cargas;
            cargas.push_back(carga1);
            cargas.push_back(carga2);
            cargas.push_back(carga3);
            double vTotal = 0;
            for (int i = 0; i < cargas.size(); i++) {
                vTotal = vTotal + cargas[i].calcularPotencial(x,y);
            }
            THEN("Potencial es 116834562159.9390563965") {
                REQUIRE(vTotal == 116834562159.9390563965);
            }
        }
    }
}