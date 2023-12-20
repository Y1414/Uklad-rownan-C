#include <stdio.h>
#include <stdlib.h>
#include "ur.h"


void swap_rows (system_of_equations system, int collumn){
    double max_elem; 
    int i, max_index;
    double* temp = malloc(system->n * sizeof(double));

    max_elem = -1; 

    for(i=system->n-1; i>=collumn; i--){
        if(max_elem < abs(system->a[i][collumn])){
            max_elem = abs(system->a[i][collumn]);
            max_index = i;
        }
    }
    //swap
    temp = system->a[max_index];
    system->a[max_index] = system->a[collumn];
    system->a[collumn] = temp;

}