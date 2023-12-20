#include <stdio.h>
#include <stdlib.h>

#include "ur.h"

void gaussian_elimination(system_of_equations system){
    int row,collumn,i;
    double first_row;
    double fraction;
    for (collumn=0;collumn<system->n;collumn++){
        swap_rows(system, collumn);
        first_row = system->a[collumn][collumn];
        for(row=collumn+1;row<system->n;row++){
            fraction = (double)system->a[row][collumn]/first_row;
            system->b[row] -= system->b[collumn]*fraction;
            for(i=0;i<system->n;i++){
                system->a[row][i] = system->a[row][i] - (system->a[collumn][i] * fraction);
            }
        }
        print_system(system);
    }
}