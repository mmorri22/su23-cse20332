#include <stdio.h>

// struct definition
typedef struct simple{
  int the_int;
  double the_double;
  float the_float;
} simple;

/***************************************************************
 * Function Name: alloc_mem
 * Pre-Conditions: simple static_str
 * Post-Conditions: void
 *
 * Prints the addresses and data values of the struct.
 **************************************************************/
void print_static_struct( simple static_str );

int main(){
  //create a struct on the stack
  simple static_str = {-14, 22.7, (float)9.2 };

  print_static_struct( static_str );

  return 0;
}

void print_static_struct( simple static_str ){

  fprintf( stdout, "Base address of static_str = %p\n", &static_str);
  fprintf( stdout, "static_str.the_int = %d at %p\n", static_str.the_int, &(static_str.the_int));
  fprintf( stdout, "static_str.the_double = %lf at %p\n", static_str.the_double, &(static_str.the_double));
  fprintf( stdout, "static_str.the_float = %f at %p\n", static_str.the_float, &(static_str.the_float));

}
