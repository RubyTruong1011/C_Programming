
#include <stdio.h>

int main( void )
{
   int x; // define first number
   int y; // define second number

   printf( "%d", "Enter two numbers: " ); // prompt user
   scanf( "%d%d", &x, &y ); // read values from keyboard

   // output results
   printf( "The sum is %d\n", x + y );
   printf( "The product is %d\n", x * y );
   printf( "The difference is %d\n", x - y );
   printf( "The quotient is %d\n", x / y );
   printf( "The remainder is %d\n", x % y );

   return 0;
}
