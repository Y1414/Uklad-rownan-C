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
void swap_rows (system_of_equations system, int collumn);
void gaussian_elimination(system_of_equations system);
void solver(system_of_equations system);
void result (system_of_equations system);
