#include "util.h"

int main()
{
   int m = 3;
   int n = 5;

   fprintf( stdout, "main - int m = %d at %p\n", m, &m);
   fprintf( stdout, "main - int n = %d at %p\n", n, &n);

   function(m, &n) ;

   fprintf( stdout, "main - int m = %d at %p\n", m, &m);
   fprintf( stdout, "main - int n = %d at %p\n", n, &n);

   return 0;
}
