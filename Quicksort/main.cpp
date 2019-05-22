#include <iostream>
#include "Sort.h"

using namespace std;

int main() {
    int array[] = {10,7,8,9,1,5};
    int n = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, n-1);
    std::cout << "Lista ordenada: ";
    std::string lista = impimirLista(array, n);
    std::cout << lista;
    return 0;
}