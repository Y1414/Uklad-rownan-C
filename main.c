#include <stdlib.h>
#include <stdio.h>
#include "ur.h"
int main(int argc, char**argv){

    FILE* in_a = argc > 1 ? fopen(argv[1], "r") : NULL;
    FILE * in_b = argc > 2 ? fopen(argv[2], "r") : NULL;

    if (in_a == NULL || in_b == NULL){
        printf("Bład w czytaniu pliku!");
        return 1;
    }

    system_of_equations system = malloc(sizeof(system_of_equations));

    read_a(in_a, system);
    read_b(in_b, system);
    print_system(system);
}