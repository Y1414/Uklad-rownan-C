#include <stdio.h>
#include <stdlib.h>
#include "ur.h"

void read_a (FILE* in, system_of_equations system){
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

void read_b (FILE * in, system_of_equations system){
    
    int temp, i;

    fscanf(in, "%d", &temp);
    if (temp != system->n){
        printf("Błąd!\n");
        exit(1);
    }

    fscanf(in, "%d", &temp);
    if (temp != 1){
        printf("błędny wymiar macierzy b");
        exit(1);
    }

    system->b = malloc(system->n * sizeof *(system->b));
    
    double number; 

    for(i = 0; i < system->n; i++){
        fscanf(in, "%lf", &number);
        system->b[i] = number;
    }

}


void print_system(system_of_equations system){
    int i,j;
    printf("\n");
    for (i=0;i<system->n;i++){
        for(j=0;j<system->n;j++){
            printf("%lf ",system->a[i][j]);
        }
        if (system->b != NULL)
            printf("  %lf\n", system->b[i]);
        else
            printf("\n");
    }
    printf("\n");
}