typedef struct
{
    double* b;
    double** a;
    int n;
    double* x;

} *system_of_equations;


void print_system(system_of_equations system);
void read_a(FILE* in, system_of_equations system);
void read_b (FILE * in, system_of_equations system);
