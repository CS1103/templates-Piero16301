#ifndef QUICKSORT_SORT_H
#define QUICKSORT_SORT_H

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

template <class T1>
int particion (T1 (&array)[6], int menor, int mayor) {
    int pivote = array[mayor];
    int i = (menor - 1);

    for (int j = menor; j <= mayor - 1; j++) {
        if (array[j] <= pivote) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[mayor]);
    return (i + 1);
}

template <class T1>
void quickSort (T1 (&array)[6], int menor, int mayor) {
    if (menor < mayor) {
        int pivote = particion(array, menor, mayor);
        quickSort(array, menor, pivote - 1);
        quickSort(array, pivote + 1, mayor);
    }
}

template <class T1>
std::string impimirLista(T1 (&array)[6], int size) {
    std::string lista;
    for (int i = 0; i < size; i++) {
        lista = lista + std::to_string(array[i]) + ( (i == size - 1) ? "" : " ");
    }
    return lista;
}

#endif //QUICKSORT_SORT_H