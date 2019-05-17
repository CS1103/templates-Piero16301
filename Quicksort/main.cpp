#include<stdio.h>
#include <iostream>
#include "Sort.h"

int main() {
    int array[] = {10,7,8,9,1,5};
    int n = sizeof(array) / sizeof(array[0]);
    QuickSort(array, 0, n-1);
    std::cout << "Lista ordenada: ";
    impimirLista(array, n);
    return 0;
}