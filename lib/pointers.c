//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    int swap = 0;
    int *prt_a_swap = &swap;


    for(int i = 0; i < count; i++){
        int *ptrBase = collection;
        int *ptrNext = collection;
        ptrNext++;
        for(int j = 0; j < count-1; j++){
            if(*ptrBase > *ptrNext ){
                *prt_a_swap = *ptrBase;
                *ptrBase = *ptrNext;
                *ptrNext = *prt_a_swap;
            }
            *ptrBase++;
            *ptrNext++;
        }
    }
  return 0;
}

void insertion_sort(int *collection, int count)
{
    int size = count;
    for (int actual = 1; actual < size; actual++){
        int key = (*(collection + actual));
        int previous = actual - 1;
        while (previous >= 0 && (*(collection + previous)) > key){
            // hago espacio para meter key - RECORRE TODOS LOS DEMÁS ELEMENTOS
            (*(collection + previous + 1)) = (*(collection + previous));
            // disminuyo uno
            previous = previous - 1;
        }
        // mete en la posición la key que tenemos
        (*(collection + previous + 1)) = key;
    }

}

void reverse(int *collection, int count)
{
    int reps;
    int *ptr_last = (collection + (count-1));
    int swap = 0;
    int *ptr_swap = &swap;
    int *ptr_init = collection;

    if (count%2 == 0){
        reps = count/2;
    } else{
        reps = (count-1)/2;
    }

    for(int i = 0; i < reps; i++){
        *ptr_swap = *ptr_init;
        *ptr_init = *ptr_last;
        *ptr_last = *ptr_swap;
        *ptr_last--;
        *ptr_init++;
    }

}

int calulate_frequency(int *collection, int count, int target)
{
    int reps = 0;
    int *ptr_to_num = collection;
    for(int i = 0; i < count; i++){
        if (*ptr_to_num == target){
            reps++;
        }
        *ptr_to_num++;
    }
  return 0;
}
