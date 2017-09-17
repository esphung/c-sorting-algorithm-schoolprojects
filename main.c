/*

FILENAME:	main.c

PURPOSE:	main file for sorting algorithm basic example

AUTHOR:		eric phung

*/

#include "utility.h"
#include "insertionsort.h"
#include "quicksort.h"


//Define developer-configurable array length, static (on the stack)


int main(int argc, char const *argv[]) {
    
    int n = 10;// size of array

    int a[n];// create empty arrays

    fillArray(a,n);

    // print out original array
    printf("\nUnsorted array: ");
    printArray(a,n);


    myInsertionSort(a,n);
    myQuickSort(a,n);

    printf("HEllo Main\n");
    return 0;
}// end main def