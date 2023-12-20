#include <stdio.h>
#include <stdlib.h>
#include "ur.h"

void read (FILE* in, system_of_equations system){
    int n, i, j;
    fscanf(in, "%d", &system->n);
    fscanf(in, "%d", &n);
    if (n != system->n){
        printf("Macierz nie jest kwadratowa!\nA kim jest ten kwadratow?\n");
        exit(1);
    }
    system->a = malloc(n * sizeof(double*));
    double number;
    for (i=0;i<n;i++){
        system->a[i] = malloc(n * sizeof(double));
        for(j=0;j<n;j++){
            fscanf(in, "%lf", &number);
            system->a[i][j] = number;
        }
    }
}