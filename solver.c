#include <stdio.h>
#include <stdlib.h>

#include "ur.h"

void solver(system_of_equations system){
    system->x = malloc(system->n * sizeof(double));
    int row, i;
    for (row = system->n - 1;row>=0;row-- ){
        double s = 0;
        for(i = row + 1; i < system->n ; i++)
            s += (double)(system->a[row][i]*system->x[i]);
        system->x[row] = (double)((system->b[row] - s) / system->a[row][row]);
    }
}
void result (system_of_equations system){
    for (int i = 0 ; i < system->n; i++)
        printf("x%d = %lf\n", i+1, system->x[i]);
}