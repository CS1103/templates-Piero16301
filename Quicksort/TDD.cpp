#include <iostream>
#include "catch.hpp"
#include "Sort.h"

SCENARIO("Ordenamiento de array") {
    GIVEN("Caso 1: Array de 6 elementos") {
        WHEN("Se inicializa el array con los elementos") {
            int array[] = {10,7,8,9,1,5};
            int n = sizeof(array) / sizeof(array[0]);
            QuickSort(array, 0, n-1);
            std::string lista = impimirLista(array, n);
            THEN("Lista ordenada") {
                REQUIRE(lista == "1 5 7 8 9 10 ");
            }
        }
    }

    GIVEN("Caso 1: Array de 6 elementos") {
        WHEN("Se inicializa el array con los elementos") {
            int array[] = {30,70,10,40,20,50};
            int n = sizeof(array) / sizeof(array[0]);
            QuickSort(array, 0, n-1);
            std::string lista = impimirLista(array, n);
            THEN("Lista ordenada") {
                REQUIRE(lista == "10 20 30 40 50 70 ");
            }
        }
    }
}